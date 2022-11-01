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
	if (n > 0)
	{
		return (1);
		_putchar(n);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(n);
	}
	else
	{
		return (-1);
		_putchar(n);
	}
}
