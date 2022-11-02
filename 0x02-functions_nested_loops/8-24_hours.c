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
	char h;

	h = "00";
	while (h <= "24")
	{
		_putchar(h);

		char m;

		m = "00";
			while (m <= "60")
			{
				_putchar("00: "m);

				char s;

				s = "00";
					while (s <= "60")
					{
						_putchar ("00: 00: "s);
						s++;
					}
				m++;
			}
		h++;
	}
}
