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
	int h;

	h = 0;
	while (h <= 24)
	{
		_putchar(h);

			int m;

			m = 0;
			while (m <= 60)
			{
				_putchar("00: "m);

					int s;

					s = 0;
					while (s <= 60)
					{
						_putchar ("00: 00: "s);
						s++;
					}
				m++;
			}
		h++;
	}
}
