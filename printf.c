#include "main.h"
/**
 * _printf - resembles printf func
 * @format: an arg
 * Return: an inte
 */
int _printf(const char *format, ...)
{
	moch d[] = {
		{"%c", print_character}, {"%s", print_st},
		{"%%", print_p}, {"%d", print_dc},
		{"%i", print_in}, {"%b", print_binary}
			};

		va_list argss;
		int k = 0, ln = 0;
		int y;

		va_start(argss, format);
		if (format == NULL || (format[0] == '%' && format[k] == '\0'))
		{
			return (-1);
		}
Heree:
		while (format[k] != '\0')
		{
			y = 5;
			while (y >= 0)
			{
				if (d[y].dd[0] == format[k] && d[y].dd[1] == format[k + 1])
				{
					ln = ln + d[y].p(argss);
					k = k + 2;
					goto Heree;
				}
				y--;
			}
			_putchar(format[k]);
			k++;
			ln++;
		}
		va_end(argss);
		return (ln);
}
