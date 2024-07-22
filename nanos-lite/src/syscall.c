#include <common.h>
#include "syscall.h"
#include <fs.h>
//#define STRACE
#include <proc.h>
extern void naive_uload(PCB *pcb, const char *filename);

extern Finfo file_table[];
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  //Log("%d",a[0]);
  switch (a[0]) {
    case SYS_yield:{
      #ifdef STRACE 
      printf("this is yield\n"); 
      #endif 
      yield();c->GPRx=0;break;}
    case SYS_exit:{
      #ifdef STRACE
      printf("this is exit\n");
      #endif 
      halt(c->GPRx);break;}
    case SYS_write:{
      #ifdef STRACE
      printf("this is write in %s\n",file_table[a[1]].name);
      #endif 
      c->GPRx=fs_write(a[1],(void *)a[2],a[3]);break;}
    case SYS_brk:{
      #ifdef STRACE
      printf("this is brk\n");
      #endif 
      c->GPRx=0;break;
    }
    case SYS_open:{
      int fd=fs_open((char*)a[1],a[2],a[3]);
      #ifdef STRACE
      printf("this is open file %s\n",file_table[fd].name);
      #endif 
      c->GPRx=fd;break;
    }
    case SYS_lseek:{
      #ifdef STRACE
      printf("this is lseek file %s\n",file_table[a[1]].name);
      #endif 
      c->GPRx=fs_lseek(a[1],a[2],a[3]);break;
    }
    case SYS_read:{
      #ifdef STRACE
      printf("this is read in %s\n",file_table[a[1]].name);
      #endif 
      c->GPRx=fs_read(a[1],(void *)a[2],a[3]);break;
    }
    case SYS_close:{
      #ifdef STRACE
      printf("this is close file %s\n",file_table[a[1]].name);
      #endif 
      c->GPRx=fs_close(a[1]);break;
    }
    case SYS_gettimeofday:{
      #ifdef STRACE
      printf("this is gettimeofday\n");
      #endif 
      AM_TIMER_UPTIME_T uptime = io_read(AM_TIMER_UPTIME);
      c->GPRx = uptime.us;
      break;
    }
    case SYS_execve:{
      #ifdef STRACE
      printf("SYS_execve a1:%s,a2:%d,a3:%d\n", a[1], a[2], a[3]);
      #endif
      naive_uload(NULL,(const char *)c->GPR2);
      break;
    } 
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
