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

	for (s = ""; s = '\0'; s--)
	{
		_putchar(s);
	}
	_putchar('\n');
}
