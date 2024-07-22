#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
#define MULTIPROGRAM_YIELD() yield()
#else
#define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
    [AM_KEY_NONE] = "NONE",
    AM_KEYS(NAME)};

size_t serial_write(const void *buf, size_t offset, size_t len){
  int n = len;
  while (n--)
  {
    putch(*((char *)buf + (len - n - 1)));
  }
  return 0;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T key = io_read(AM_INPUT_KEYBRD);
  if(key.keycode == 0){
    return 0;
  }
  else{
    switch(key.keydown){
      case 0:  sprintf((char *)buf,"ku %s\n",keyname[key.keycode]); break;
      case 1:  sprintf((char *)buf,"kd %s\n",keyname[key.keycode]); break;
    }
    return len;
  }
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
    AM_GPU_CONFIG_T dispinfo = io_read(AM_GPU_CONFIG);
    sprintf(buf,"WIDTH:%d\nHEIGHT:%d\n",dispinfo.width,dispinfo.height);
    return 0;
  }


extern size_t open_offset;
size_t fb_write(const void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T dispinfo = io_read(AM_GPU_CONFIG);
  AM_GPU_FBDRAW_T ctl;
  ctl.pixels = (void *)buf;
  ctl.sync = true;
  ctl.x = offset % dispinfo.width;
  ctl.y = offset / dispinfo.width;
  ctl.w = len >> 16;                
  ctl.h = len & 0x0000FFFF; 
  io_write(AM_GPU_FBDRAW, ctl.x, ctl.y, ctl.pixels, ctl.w, ctl.h, ctl.sync);
  open_offset = offset + len;
  return 0;
}

void init_device()
{
  Log("Initializing devices...");
  ioe_init();
}
