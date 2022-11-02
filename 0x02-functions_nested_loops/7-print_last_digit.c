#include "main.h"

/**
 * print_last_digit - print the last digit no.
 *
 * @n: n is integer passed
 *
 * Return: Return integer
 *
 */

int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);

	return (n);
}
