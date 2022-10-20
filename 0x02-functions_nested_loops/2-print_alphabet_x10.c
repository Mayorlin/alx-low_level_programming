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

	lower_alpha = 'a';

	while (num_of_iteration <= 10)
	{	
		num_of_iteration = 10;

		while (lower_alpha <= 'a')
		{
			_putchar(lower_alpha);
			lower_alpha++;
		}
		_putchar('\n');

		num_of_iteration++;
	}
}
