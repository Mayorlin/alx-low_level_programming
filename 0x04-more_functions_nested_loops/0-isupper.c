#include "main.h"

/**
 * _isupper - checks for case of letter passe
 *
 * Description: c - accepts letters to determine its case
 *
 * Return: 0 always
 */

int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
