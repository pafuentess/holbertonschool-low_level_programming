#include "holberton.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer.
*/

void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;

	while (a <= 2)
	{
		b = 0;

		while (b <= 3)
		{
			c = 0;

			while (c <= 5)
			{
				d = 0;

				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');

					++d;
				}
				++c;
			}
			++b;
		}
		++a;
	}
}
