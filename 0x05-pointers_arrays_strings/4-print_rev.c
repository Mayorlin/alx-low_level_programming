#include "main.h"

/**
 * print_rev - Print reverse string
 *
 * @str: Pass pointer for string
 *
 * Return: void
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
