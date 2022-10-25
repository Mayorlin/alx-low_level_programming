#include "main.h"

/**
 * _puts - A function that prints a string
 *
 * @str: A pointer passed into the function
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
}
