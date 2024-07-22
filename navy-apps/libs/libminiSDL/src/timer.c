#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
                printf("SDL_AddTimer\n");
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
                printf("SDL_RemoveTimer\n");
  return 1;
}

uint32_t SDL_GetTicks() {
                printf("SDL_GetTicks\n");
  return NDL_GetTicks();
}

void SDL_Delay(uint32_t ms) {
                  printf("SDL_Delay\n");

}
