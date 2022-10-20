#include "main.h"

/**
 * main - call function to print a to z
 *
 * print_alphabet: print_alphabet "prints a to z"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char lower_alpha;

	lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		_putchar(lower_alpha);
		lower_alpha++;
	}
}
