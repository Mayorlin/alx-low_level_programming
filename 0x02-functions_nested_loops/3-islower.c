#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _islower(int c) - determines case
 *
 * @c: takes in the passed value
 *
 * Return: int
 */

int _islower(int c)
{
	if (!islower(c))
		return (0);
	else
		return (1);
}
