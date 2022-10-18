#include <stdio.h>

/**
 * main - upper and lowercase letters
 *
 * Description: How to print upper and lower case letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
