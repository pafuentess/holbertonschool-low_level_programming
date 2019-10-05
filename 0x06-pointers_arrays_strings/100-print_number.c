#include "holberton.h"

/**
* print_number - print integer
* @n: number to print
*/

void print_number(int n)
{
	int a, b, c, d, s[1000000];

	d = 0;
	a = n / 10;
	b = n % 10;
	if (a <= 9)
	{
		s[0] = b;
		s[1] = a;
		_putchar(s[1] + '0');
		_putchar(s[0] + '0');
	}
	else
	{
		while (n > 9)
		{
			b = n % 10;
			n = n / 10;
			s[d] = b;
			if (n <= 9)
			{
				s[d + 1] = n;
			}
			++d;
		}
		for (c = d ; c >= 0 ; c--)
		{
			_putchar(s[c] + '0');
		}
		_putchar('\n');
	}
}
