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

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>

static int is_batch_mode = false;
void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}


static int cmd_si(char *args){
  char *arg = strtok(NULL, " ");
  if (arg==NULL)
    cpu_exec(1);
  else{
    int i;
    sscanf(arg,"%d",&i);
    cpu_exec(i);
  }
  return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL, " ");
  if (arg==NULL)
    printf("Please scanf reg or watchpoint needing to print\n");
  else if(*arg =='r')
    isa_reg_display();
  else if(*arg=='w'){
    //display_wp();
  }
  else
    printf("Unknowm input\n");
  return 0;
}

static int cmd_x(char *args){
  char *arg = strtok(NULL, " ");
  if (arg==NULL)
    printf("Please scanf a number and a address\n");
  else {
    int i;
    if(sscanf(arg,"%d",&i)==1){;
    arg = strtok(NULL,"");
    int m=0x00;
    if(sscanf(arg,"%x",&m)==1){
      int count=0;
      for (int n = 0; n < i; n++)
      {
        if(count==3){
        printf("\n");
        count=0;
        }
        
          word_t data = vaddr_read(m,4);
          printf("0x%08x\t",data);
          m=m+4;
          count++;
        
      }
      printf("\n");
    }else{
      printf("Unkonw input\n");
    }
    }else {
      printf("Unkonw input\n");
    }
  }
  return 0;
}

static int cmd_p(char *args){
  bool success;
  word_t data=expr(args,&success);
  printf("%s=%u\n",args,data);
  return data;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Step", cmd_si },
  { "info","Print reg or watch",cmd_info },
  { "x","Print memory",cmd_x},
  { "p","Compute",cmd_p},

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return ; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

static void test_expr(){
  FILE *file;
  char filename[]="/home/parallels/ysyx-workbench/nemu/tools/gen-expr/input";
  char line[65536];
  file=fopen(filename,"r");
  if (file == NULL)
  {
    Log("Open filr error");
  }
  while (fgets(line,sizeof(line),file)!=NULL)
  { 
    if(line[0]=='o')
    break;
    else{
      int data;
      char *avgr=line+1;
      data=cmd_p(avgr);
      char *da;
      sprintf(da,"%d",data);
      if(data==line[0])
        Log("pass");
    }
  }
  fclose(file);
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();
  test_expr();
  /* Initialize the watchpoint pool. */
  init_wp_pool();
}

