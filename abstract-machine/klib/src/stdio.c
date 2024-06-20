#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>


#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void reverse(char *str) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int intTostr(int num, char *str){
    int i=0;
    int isNegative=0;
    if (num==0)
    {
      str[i++]='0';
      str[i]='\0';
      return i;
    }

    if(num<0){
      isNegative=1;
      num=-num;
    }

    while(num!=0){
      int rem=num%10;
      str[i++]=rem+'0';
      num=num/10;
    }

    if(isNegative){
      str[i++]='-';
    }
    str[i]='\0';
    reverse(str);
    return i;
}

int printf(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    while (*fmt != '\0') {
        if (*fmt == '%') {
            fmt++;
            switch (*fmt) {
            case 'd': {
                int a = va_arg(ap, int);
                char c[100];
                int n = intTostr(a, c);
                int m=0;
                while (m!=n)
                {
                  putch(c[m++]);
                }
                break;
            }
            case 's': {
                char *s = va_arg(ap, char*);
                while (*s!='\0')
                {
                  putch(*(s++));
                }
                break;
            }
            case 'c': {
                char c = (char)va_arg(ap, int);
                  putch(c);
                break;
            }
            default:
                break;
            }
            fmt++; // Skip format specifier
        } else {
            putch(*fmt);
            fmt++;
        }
    }
    return 0;
}



int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
    memset(out,0,100);
    va_list ap;
    va_start(ap, fmt);
    char *out_o = out;
    while (*fmt != '\0') {
        if (*fmt == '%') {
            fmt++;
            switch (*fmt) {
            case 'd': {
                int a = va_arg(ap, int);
                char c[100];
                int n = intTostr(a, c);
                strcat(out, c);
                out += n; // Move past the added string
                break;
            }
            case 's': {
                char *s = va_arg(ap, char*);
                strcat(out, s);
                out += strlen(s); // Move past the added string
                break;
            }
            default:
                break;
            }
            fmt++; // Skip format specifier
        } else {
            *out = *fmt;
            out++;
            fmt++;
        }
    }
    *out = '\0'; // Null-terminate the string
    va_end(ap);
    return out - out_o;
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
