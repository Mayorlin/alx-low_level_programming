#include "main.h"

/**
 * _isalpha - checks and return boolean value
 *
 * @c: passes value to function
 *
 * Return: integer
 *
 */

int _isalpha(int c)
{
	int upperCase;
	int lowerCase;

	upperCase = 'A';
	lowerCase = 'a';
	if (c == upperCase)
	{
		while (upperCase >= 'Z')
		{
			if (c == upperCase)
			{
				return (1);
			}
			upperCase++;
		}
	}
	else if (c == lowerCase)
	{
		while (lowerCase >= 'z')
		{
			if (c == lowerCase)
			{
				return (1);
			}
			lowerCase++;
		}
	}
	else
		return (0);
	return (0);
}
