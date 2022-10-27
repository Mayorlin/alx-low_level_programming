#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string
 *
 * @dest: to append to
 *
 * @src: to append
 *
 * @n: append purpose
 *
 * Return: string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
