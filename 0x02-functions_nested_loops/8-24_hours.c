#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 *
 * @h: hours
 *
 * @m: minutes
 *
 * @s: seconds
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
	int h, m, s;

	h = 0;
	m = 0;
	s = 0;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m <= 60; m++)
		{
			for (s = 0; s <= 60; s++)
			{
				_putchar(s);
			}
			_putchar(m);
		}
		_putchar(h);
	}
}
