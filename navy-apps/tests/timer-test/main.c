#include <stdio.h>
#include <NDL.h>

int main() {
  int i=0;
  uint32_t past=0;
  uint32_t now;
  while(1){
    now=NDL_GetTicks();
    while((now-past)/500){
      printf("%d time has gone 0.5s\n",i);
      i++;
      past=now;
    }
  }
  return 0;
}
