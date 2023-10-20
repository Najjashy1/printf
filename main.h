#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_character(va_list charcater);
int print_st(va_list string);
int _len(char *s);
int _lench(const char *s);
int print_p(void);
int print_in(va_list ing);
int print_dc(va_list ing);
#endif
