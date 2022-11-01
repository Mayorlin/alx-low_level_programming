#include "main.h"

/**
 * print_sign - prints values and signs
 *
 * @n: pass value and determines result
 *
 * Return: returns an integer
 *
 */

int print_sign(int n)
{
	int zero;

	zero = 0;

	if (n > zero)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
