#include "main.h"

/**
 * print_alphabet_x10 - prints a to z 10x
 *
 * Return: Always 0
 *
 */

void print_alphabet_x10(void)
{
	char lower_alpha;
	char num_of_iteration;

	num_of_iteration = 1;

	while (num_of_iteration <= 10)
	{
		lower_alpha = 'a';

		while (lower_alpha <= 'z')
		{
			_putchar(lower_alpha);
			lower_alpha++;
		}
		_putchar('\n');

		++num_of_iteration;
	}
}
