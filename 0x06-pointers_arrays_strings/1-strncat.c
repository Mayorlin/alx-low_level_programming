#include "main.h"
#include <string.h>

/**
 * _strncat - append characters to function
 *
 * @dest: to be appended to
 *
 * @src: to append to dest
 *
 * @n: to append
 *
 * Return: char
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	
	return (dest);
}
