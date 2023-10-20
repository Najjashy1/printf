#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct format - formates things
 * @dd: pointer
 * @p: pointer
 */
typedef struct format
{
	char *dd;
	int (*p)();
} moch;
int print_binary(va_list bin);
int _printf(const char *format, ...);
int _putchar(char c);
int print_character(va_list charcater);
int print_st(va_list string);
int _len(char *s);
int _lench(const char *s);
int print_p(void);
int print_in(va_list ing);
int print_dc(va_list ing);
int _printf(const char *format, ...);
#endif
