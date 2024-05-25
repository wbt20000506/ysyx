#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
    const char *p = s;
    // 遍历字符串直到找到 '\0'
    while (*p != '\0') {
        p++;
    }
    return p - s;  // 计算指针差，即字符串长度
}


char *strcpy(char *dst, const char *src) {
    size_t i = 0;
    while ((dst[i] = src[i]) != '\0') {
        i++;
    }
    return dst;
}


char *strncpy(char *dst, const char *src, size_t n) {
    size_t i = 0;
    // 复制 src 到 dst，最多复制 n 个字符
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    // 如果 src 的长度小于 n，剩余部分填充 '\0'
    for (; i < n; i++) {
        dst[i] = '\0';
    }
    return dst;
}


char *strcat(char *dst, const char *src) {
  char *par=dst;
  while (*par != '\0')
  {
    par++;
  }
  size_t i=0;
  while (*(src+i)!='\0')
  {
    *(par+i)=*(src+i);
    i++;
  }
  *(par+i+1)='\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
    if (n == 0) return 0;  // 如果 n 是 0，则不比较，直接返回 0

    while (n-- != 0 && *s1 == *s2) {
        if (*s1 == '\0')  // 如果同时遇到两个字符串的结尾，则相等
            return 0;
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}


void *memset(void *s, int c, size_t n) {
    unsigned char *p = s;
    while (n--) {
        *p++ = (unsigned char)c;
    }
    return s;
}


void *memmove(void *dst, const void *src, size_t n) {
    const char *s = src;
    char *d = dst;

    if (s < d && s + n > d) { // 检测重叠，需要从后向前复制
        s += n;
        d += n;
        while (n--) {
            *--d = *--s;
        }
    } else {
        while (n--) {
            *d++ = *s++;
        }
    }
    return dst;
}


void *memcpy(void *out, const void *in, size_t n) {
    const char *src = in;
    char *dst = out;

    while (n--) {
        *dst++ = *src++;
    }
    return out;
}


int memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = s1, *p2 = s2;
    while (n--) {
        if (*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }
    return 0;
}


#endif
