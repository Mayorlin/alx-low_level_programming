#include <stdio.h>

/**
 * main - print the size of various types
 * 
 * Description: prints the size of various types on the computer it is compiled
 * an run on
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	print("Size of a char: %d byte(s)\n", (int) sizeof(char));
	print("Size of an int: %d byte(s)\n", (int) sizeof(int));
	print("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	print("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	print("Size of a float: %d byte(s)\n", (int) sizeof(float));
}
