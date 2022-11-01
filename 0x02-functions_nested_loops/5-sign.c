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
	int negative, positive, zero;

	negative = -;
	positive = +;
	zero = 0;

	if (n > zero)
	{
		return (1);
		_putchar(positive);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(negative);
	}
	else
	{
		return (0);
		_putchar(zero);
	}
}
