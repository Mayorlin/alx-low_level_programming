#include "main.h"
/**
 * _islower(int c) - determines case
 *
 * @c: takes in the passed value
 *
 * Return: int
 */

int _islower(int c)
{
	int lowercase;
	lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == c)
			return (1);
		else
			return (0);
		lowercase++;
	}
	
	return (0);
}
