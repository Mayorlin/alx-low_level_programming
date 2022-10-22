#include "main.h"

/**
 * more_numbers - Prints 10 lines of numbers
 *
 * Return: Always return 0
 */

void more_numbers(void)
{
	char c;
	char n;
i
	for (n = 1; n <= 10; n++)
	{
		for (c = 0; c <= 10; c++)
		{	if (c >= 10)
			_putchar('1');
			_putchar (C % 10 + '0');
		}
		_putchar('\n');
	}
}
