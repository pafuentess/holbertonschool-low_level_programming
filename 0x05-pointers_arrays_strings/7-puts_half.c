#include "holberton.h"

/**
* puts_half - prints the half of a string
* @str: string to print
*/


void puts_half(char *str)
{
	int a, b, d, c, impar;

	a = 0;

	while (str[a] != '\0')
	{
		++a;
	}

	b = a;

	impar = b % 2;

	if (impar != 0)
	{
		c = (b - 1) / 2;

		for (d = (c + 1) ; d <= b ; d++)
		{
			_putchar(str[d]);
		}
	}

	else if (impar == 0)
	{
		c = a / 2;

		for (d = c ; d <= b ; d++)
		{
			_putchar(str[d]);
		}
	}
	_putchar('\n');
}
