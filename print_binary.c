#include "main.h"
/**
 * print_binary - handles binary conversion
 * @bin: an arg
 * Return: int
 */
int print_binary(va_list bin)
{
	unsigned int nb, b;
	int varb = 0;
	int vari = 0;
	int j, i;
	int k = 1;

	nb = va_arg(bin, unsigned int);

	for (j = 0; j < 32; j++)
	{
		b = ((k << (32 - j)) & nb);
		if (b >> (31 - j))
		{
			varb = 1;
		}

		if (varb)
		{
			i = b >> (31 - j);
			_putchar(i + '0');
			vari++;
		}
	}

	if (vari == 0)
	{
		vari++;
		_putchar(48);
	}
	return (vari);

}

