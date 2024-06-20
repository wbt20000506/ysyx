#include <am.h>
#include <nemu.h>
#include <assert.h>
extern char _heap_start;
int main(const char *args);
char *hbrk;
void bench_reset() {
  hbrk = (void *)ROUNDUP(heap.start, 8);
}
Area heap = RANGE(&_heap_start, PMEM_END);

#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}

void _trm_init() {
  bench_reset();
  int ret = main(mainargs);
  assert(1);
  halt(ret);
}
