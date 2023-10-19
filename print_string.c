#include "main.h"
/**
* print_st - prints a string
* @string: an argument to function
* Return: string length
*/
int print_st(va_list string)
{
	char *s;
	int j, len;

	s = va_arg(string, char *);

	if (s == NULL)
	{
		s = "null";
		len = _len(s);
	}
	else
	{
		len = _len(s);
	}

	for (j = 0; j < len; j++)
	{
		_putchar(s[j]);
	}

	return (len);
}
