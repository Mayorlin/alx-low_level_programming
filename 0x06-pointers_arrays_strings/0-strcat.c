#include "main.h"
#include <string.h>

/**
 * _strcat - function that concat
 *
 * @dest: append string
 *
 * @src: string gets appended
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char c, d;

	c = strlen(dest);
	for (; d >= c; d++)
	{
		_putchar(src);
		break;
	}
}
