#include "holberton.h"

/**
* print_number - print integer
* @n: number to print
*/

void print_number(int n)
{
	int a, b, c;

	if (n == 0)
	{
		_putchar(48);
	}
	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	while (n > 9)
	{
		a = n;
		b = 1;
		while (a > 9)
		{
			a = a / 10;
			if (a <= 9)
			{
				_putchar(a + '0');
				c = a;
			}
			b = b * 10;
		}
		n = n - (c * b);
		if (n == 0)
		{
		}
		else if ((n / (b / 10)) < 1)
		{
			_putchar('0');
			n = n * 10;
		}
	}
	if (n > 0 && n <= 9)
	{
		_putchar(n + '0');
	}
}
