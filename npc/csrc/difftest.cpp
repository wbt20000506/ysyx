#include <assert.h>
#include <dlfcn.h>
#include <stdio.h>
#include <cstdint>
#include <map>
#include <systemc.h>
#include <verilated.h>
#include "Vysyx_23060286_top.h"
#include "Vysyx_23060286_top___024root.h"
void (*ref_difftest_memcpy)(uint32_t addr, uint8_t *buf, size_t n, bool direction) = NULL;
uint32_t (*ref_difftest_regcpy)(uint32_t *dut, bool direction, uint32_t pc) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;

extern std::map<uint32_t, uint8_t> data_mo;
extern std::map<uint32_t, uint32_t> data;
extern sc_signal<uint32_t> pc_wire;
extern sc_signal<uint32_t> npc_wire;
extern Vysyx_23060286_top *top;
static const char *ref_so_file="/home/parallels/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so";

void init_difftest(long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t, uint8_t*, size_t, bool)) dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (uint32_t (*)(uint32_t*, bool,uint32_t)) dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

//   ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
//   assert(ref_difftest_raise_intr);

//   void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
//   assert(ref_difftest_init);

    uint8_t code[data.size()*4];
    uint32_t adr = 0x80000000;
    long i=0;

    while (data.find(adr)!=data.end())
    {
        code[i+3] = (data[adr]>>24)&0xff;
        code[i+2] = (data[adr]>>16)&0xff;
        code[i+1] = (data[adr]>>8)&0xff;
        code[i] = data[adr]&0xff;
        data_mo[adr+3] = (data[adr]>>24)&0xff;
        data_mo[adr+2] = (data[adr]>>16)&0xff;
        data_mo[adr+1] = (data[adr]>>8)&0xff;
        data_mo[adr] = data[adr]&0xff;
        //printf("%08x:%02x%02x%02x%02x\n",adr,code[i],code[i+1],code[i+2],code[i+3]);
        i=i+4;
        adr=adr+4;
    }
    
    uint32_t reg[32];
    for (size_t i = 0; i < 32; i++)
    {
        reg[i]=top->rootp->ysyx_23060286_top__DOT__GRP__DOT__rf[i];
    }
     ref_difftest_memcpy(0x80000000, code, i, 1);
     ref_difftest_regcpy(reg, 1,pc_wire);
}

bool isa_difftest_checkregs() {
    uint32_t gpr[32];
    uint32_t pc;
    pc=ref_difftest_regcpy(gpr,0,pc);
  for (int i = 0; i < 32; i++){
    if(gpr[i]!=top->rootp->ysyx_23060286_top__DOT__GRP__DOT__rf[i]|pc!=pc_wire.read()){
        printf("pc:%08x   %08x\n",pc,pc_wire.read());
        printf("reg[%d]:%08x   %08x\n",i,gpr[i],top->rootp->ysyx_23060286_top__DOT__GRP__DOT__rf[i]);
      return false;
    }
  }
  return true;
}

void diffstpe(){
    ref_difftest_exec(1);
}


