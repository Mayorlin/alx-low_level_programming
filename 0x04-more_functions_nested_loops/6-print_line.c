#include "main.h"

/**
 * print_line - print line
 *
 * Return: 0
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a <= n; a++)
		_putchar(95);
	_putchar('\n');
}
