#include "holberton.h"
/**
*times_table-prints the 9 times table.
*/
void times_table(void)
{
	int a, b, c, d, e;

	while (a <= 9)
	{	b = 0;
		while (b <= 9)
		{	c = a * b;
			if (c <= 9)
			{
				if (b != 0)
				{	_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
					if (b < 9)
					{	_putchar(',');
					}
				}
				else
				{	_putchar(c + '0');
					_putchar(',');
				}
			}
			if (c > 9)
			{	d = c / 10;
				e = c % 10;
				_putchar(' ');
				_putchar(d + '0');
				_putchar(e + '0');
				if (b < 9)
				{	_putchar(',');
				}
				else
				{
				}
			}
			++b;
		}
		++a;
		_putchar('\n');
	}
}
