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

	if (c != '0')
	{
		while (upperCase <= 'Z')
		{
			return (1);
			upperCase++;
		}
	}
	else if
	{
		lowerCase = 'a';

		while (lowerCase <= 'z')
		{
			return (1);
			lowerCase++;
		}
	}
	else
	{
		return (0);
	}

	return (0);
}

