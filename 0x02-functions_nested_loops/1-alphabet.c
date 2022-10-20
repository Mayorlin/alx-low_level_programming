#include "main.h"

/**
 * main - Function to print a to z
 *
 * Description: print_alphabet(void) prints 'a' to 'z'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet()
{
	char lower_alpha;

	lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		lower_alpha++;
	}
}
