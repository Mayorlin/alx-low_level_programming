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

	if ((c == upperCase) || (c == lowerCase))
	{
		while (upperCase <= 'Z')
		{
			return (1);
			upperCase++;
		}
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
