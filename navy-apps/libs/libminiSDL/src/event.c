#include <NDL.h>
#include <SDL.h>
#include <string.h>
#include <stdio.h>
#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

static uint8_t keystate[83] = {};

int SDL_PushEvent(SDL_Event *ev) {
  printf("SDL_PushEvent\n");
  return 0;
}

int SDL_PollEvent(SDL_Event* ev) {

  char ndl_event[32];
  if (!NDL_PollEvent(ndl_event, sizeof(ndl_event)))
    return 0;

  char kb_state[5];
  char kb_name[20];
  sscanf(ndl_event, "%s %s", kb_state, kb_name);
  ev->type = (!strcmp(kb_state, "kd")) ? SDL_KEYDOWN : SDL_KEYUP;
  ev->key.keysym.sym = SDLK_NONE;
  for (size_t i = 0; i < 83; i++) {
    if (!strcmp(kb_name, keyname[i])) {
      ev->key.keysym.sym = i;
      keystate[i] = (!strcmp(kb_state, "kd")) ? 1 : 0;
      break;
    }
  }
  int screen_w=0;
  int screen_h=0;
  int *w=300;
  int *h=300;
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    int fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  return 1;
}


int SDL_WaitEvent(SDL_Event* event){ 


  char ndl_event[32];
  // wait for NDL events
  while (!NDL_PollEvent(ndl_event, sizeof(ndl_event)));

  char kb_state[5];
  char kb_name[20];
  // prase NDL events, <kd/ku> <keyname> 
  sscanf(ndl_event, "%s %s", kb_state, kb_name);
  // pack SDL_event form NDL events
  event->type = (!strcmp(kb_state, "kd")) ? SDL_KEYDOWN : SDL_KEYUP;
  event->key.keysym.sym = SDLK_NONE;
  // get sdl keyname
  for (size_t i = 0; i < 83; i++) {
    if (!strcmp(kb_name, keyname[i])) {
      event->key.keysym.sym = i;
      keystate[i] = (!strcmp(kb_state, "kd")) ? 1 : 0;
      return 0;
    }
  }
  int screen_w=0;
  int screen_h=0;
  int *w=300;
  int *h=300;
  if (getenv("NWM_APP")) {
    printf("word\n");
    int fbctl = 4;
    int fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  return 1;
}



int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents\n");
}

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

uint8_t* SDL_GetKeyState(int *numkeys) {

  if(numkeys != NULL){
    *numkeys = ARRLEN(keyname);
  }

  return keystate;

}
