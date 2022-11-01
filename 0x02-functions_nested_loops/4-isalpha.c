#include "main.h"

/**
 * int _isalpha - checks and return boolean value
 *
 * @c: passes value to function.
 *
 */

int _isalpha(int c)
{
	int upperCase;
	int lowerCase;

	if (c != lowerCase)
	{
		upperCase = 'A';
		while (upperCase >= 'Z')
		{
			if (c == upperCase)
			{
				return (1);
			}
			upperCase++;
		}
	}
	else if (c != upperCase)
	{
		lowerCase = 'a';
		while (lowerCase >= 'z')
		{
			if (c == lowerCase)
			{
				return (1);
			}
			lowerCase--;
		}
	}
	else
		return (0);
}
