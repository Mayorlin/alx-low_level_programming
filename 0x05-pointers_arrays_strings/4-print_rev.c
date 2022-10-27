#include "main.h"
#include <string.h>
/**
 * print_rev - Print reverse string
 *
 * @s: Pass pointer for string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a, b;

	a = strlen(s);
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
