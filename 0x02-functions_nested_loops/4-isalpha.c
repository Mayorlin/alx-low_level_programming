#include "main.h"

/**
 * int _isalpha - checks and return boolean value
 *
 * @c: passes value to function
 *
 */

int _isalpha(int c)
{
	int upperCase;
	int lowerCase;
	
	upperCase = 'A';
	lowerCase = 'a';

	while (upperCase = 'A')
	{
		if (c == upperCase)
			return (1);
			upperCase++;
		else
			return (0);
	}
	while (lowerCase = 'a')
	{
		if (c == lowerCase)
			return (1);
			lowerCase++;
		else
			return (0);
	}

	return (0);
}
