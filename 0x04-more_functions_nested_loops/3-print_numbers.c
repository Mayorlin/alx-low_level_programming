#include "main.h"

/**
 * print_numbers - Print number between 0 to 9
 *
 * _putchar: Prints out from the stdout
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c >= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
