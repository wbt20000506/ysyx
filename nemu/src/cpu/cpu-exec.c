/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
extern char *elf_file;
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
static char *p_inst=NULL; 
//static int block_nun=1;
char *load_elf_symbols(const char* elf_path,const uint32_t addr);
typedef struct {
    char rbuffer[10][256];  // 储存字符串的二维字符数组
    int rhead;
    int rtail;
} RingBuffer;

RingBuffer rb = { .rhead = 0, .rtail = 0 };

static void writeRingbuffer(RingBuffer *rb, const char *prb) {
    strncpy(rb->rbuffer[rb->rhead], prb, 255);  // 复制字符串到环形缓冲区
    rb->rhead = (rb->rhead + 1) % 10;  // 环形递增头指针
    if (rb->rhead == rb->rtail) {  // 如果头追上尾部，尾部也要向前移动
        rb->rtail = (rb->rtail + 1) % 10;
    }
}

static void printRingbuffer(const RingBuffer *rb) {
    int current = rb->rtail;
    do {
        printf("%s\n", rb->rbuffer[current]);
        current = (current + 1) % 10;
    } while (current != rb->rhead-1);
}
static void ftace(char j,vaddr_t f_pc,uint32_t f_inst,vaddr_t f_dnpc) __attribute__((used));
static void ftace(char j,vaddr_t f_pc,uint32_t f_inst,vaddr_t f_dnpc) {
    if(j=='j'){
      if (f_inst==0x00008067)
      {
        //block_nun--;
        //int a=block_nun;
        printf("0x%08x:",f_pc);
        // while(a--){
        //   printf(" ");
        // }
        load_elf_symbols(elf_file,f_dnpc);
        printf("ret [%s]\n",load_elf_symbols(elf_file,f_dnpc));
      }else
      {
        //int b=block_nun;
        printf("0x%08x:",f_pc);
        // while(b--){
        //   printf(" ");
        // }
        
        printf("call [%s@0x%08x]\n",load_elf_symbols(elf_file,f_dnpc),f_dnpc);
        //block_nun++;
      }
    }
}


void device_update();
void scan_wp();


static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_WATCHPOINT
  scan_wp();
#endif
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
#ifndef CONFIG_ISA_loongarch32r
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);  
#else
  p[0] = '\0'; // the upstream llvm does not support loongarch32r
#endif
#endif
  p_inst=p;
#ifdef CONFIG_FTRACE
  ftace(*p,s->pc,s->isa.inst.val,s->dnpc);
#endif
  char prb[100];
  memset(prb,' ',100);
  sprintf(prb,"    0x%08x: %08x      %s",s->pc,s->isa.inst.val,p_inst);
  writeRingbuffer(&rb,prb);  
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING){
      if (s.isa.inst.val!=0x00100073)
      {
        printRingbuffer(&rb);     
        printf("--> 0x%08x: %08x      %s\n",s.pc,s.isa.inst.val,p_inst);
      }
      break;}
    IFDEF(CONFIG_DEVICE, device_update());
  }
}



static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
