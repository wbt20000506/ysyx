#include <am.h>

static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }
static uint64_t startime;
void __am_timer_init() {
  startime = (((uint64_t)inl(0xa000004c))<<32)|(uint64_t)inl(0xa0000048);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = (((((uint64_t)inl(0xa000004c))<<32)|(uint64_t)inl(0xa0000048))-startime)*1000000;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
