#include "main.h"

/**
 * swap_int - swaps two values of type integers
 *
 * @a: value a
 *
 * @b: value b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int y, z;

	y = *a;
	z = *b;

	*a = z;
	*b = y;
}
