#include "main.h"

/**
 * _abs(int) - Computes the absolute value
 *
 * @n: value entered, and value checked
 *
 * Return: integer
 *
 */

int _abs(int n)
{
	if (n > 0)
	{
		n = -n;
		return (n);
	}

	return (0);
}
