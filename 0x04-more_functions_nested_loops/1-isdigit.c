#include "main.h"

/**
 * _isdigit - checks the number
 *
 * @c: scans from 0 through 9
 *
 * Return: Always return 1 if successful or 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
