#include "main.h"

/**
 * print_most_numbers - Program to print two numbers
 *
 * Return: Always Return 0 Sucess
 */

void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;

		if (c == '2' || c == '4')
		{
			c = c + 49;
		}
		_putchar('\n');
	}
}
