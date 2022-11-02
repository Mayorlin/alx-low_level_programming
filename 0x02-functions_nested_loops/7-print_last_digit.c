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
	int ret;

	ret = n % 10;
	_putchar(ret);

	return (0);
}
