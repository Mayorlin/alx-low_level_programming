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

	c = 0;
	while (dest[c])
		c++;
	for (d = 0; src[d] != '\0'; d++)
	{
		dest[c] = src[d];
		c += 1;
	}
	dest[c] = '\0';
	return (dest);
}
