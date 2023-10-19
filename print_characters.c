#include "main.h"

/**
 * print_character - prints a character
 * @character: an argument
 * Return: 0
 */

int print_character(va_list character)
{
	char c;

	c = va_arg(character, int);
	_putchar(c);
	return (0);
}
