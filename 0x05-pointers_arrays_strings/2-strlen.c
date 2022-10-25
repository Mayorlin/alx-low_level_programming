#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: returns the length of the string
 *
 * Return: Code sucessful when it returns an int
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != 0)
	{
		a = a + 1;
		s++;
	}
	return (a);
}
