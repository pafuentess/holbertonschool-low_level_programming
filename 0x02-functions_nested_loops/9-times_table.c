#include "holberton.h"

/**
* times_table - prints the 9 times table.
*/


void times_table(void)
{
	int a, b, c, d, e;

	a = 0;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;
			if (c >= 10)
			{
				d = c / 10;
				e = c % 10;
				_putchar(d + '0');
				_putchar(e + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (b == 9)
				{
					_putchar(36);
				}
			}
			else if (c < 10)
			{
				_putchar(c + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (b == 9)
				{
					_putchar(36);
				}
			}
		++b;
	}
	_putchar('\n');
	++a;
	}
}
