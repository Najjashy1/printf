#include "main.h"
/**
 * _len - finds the string length
 * @s: pointer
 * Return: length
 */
int _len(char *s)
{
	char *pp = s;

	while (*pp != '\0')
	{
		pp++;
	}

	return (pp - s);
}

/**
 * _lench - finds the length "const char"
 * @s: pointer
 * Return: length
 */
int _lench(const char *s)
{
	const char *pp = s;

	while (*pp != '\0')
	{
		pp++;
	}

	return (pp - s);
}

