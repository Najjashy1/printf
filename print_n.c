#include "main.h"
/**
 * print_in - function that prints int
 * @ing: an arg
 * Return: characters number
 */
int print_in(va_list ing)
{
	int j = va_arg(ing, int), k = 1;
	int count;
	int ls = j % 10;
	int integer, xp = 1;

	j = j / 10;
	count = j;
	if (ls < 0)
	{
		_putchar('_');
		 count = -count;
		 j = -j;
		 ls = -ls;
		 k++;
	}
	if (count > 0)
	{
		while (count / 10 != 0)
		{
			xp = xp * 10;
			count = count / 10;
		}
		while (xp > 0)
		{
			integer = count / xp;
			_putchar(integer + '0');
			count = count - (integer * xp);
			xp = xp / 10;
			k++;
		}
	}
	_putchar(ls + '0');
	return (k);
}

#include "main.h"
/**
 * print_dc - function that print decimal numbers
 * @ing: an arg
 * Return: dec
 */
int print_dc(va_list ing)
{
	int j = va_arg(ing, int), k = 1;
	int count;
	int ls = j % 10, integer;
	int xp = 1;

	j = j / 10;
	count = j;
	if (ls < 0)
	{
		_putchar('_');
		count = -count;
		j = -j;
		ls = -ls;
		k++;
	}
	if (count > 0)
	{
		while (count / 10 != 0)
		{
			xp = xp * 10;
			count = count / 10;
		}
		while (xp > 0)
		{
			integer = count / xp;
			_putchar(integer + '0');
			count = count - (integer * xp);
			xp = xp / 10;
			k++;
		}
	}
	_putchar(ls + '0');
	return (k);
}
