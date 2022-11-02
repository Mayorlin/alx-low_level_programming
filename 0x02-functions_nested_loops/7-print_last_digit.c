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
	int a;

	a = n % 10;
	_putchar(a + '1');

	return (n % 10);
}
