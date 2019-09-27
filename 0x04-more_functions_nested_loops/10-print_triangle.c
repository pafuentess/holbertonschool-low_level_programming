#include "holberton.h"
#include <stdio.h>

/**
* print_triangle - print a triangle
* @size: base and height of triangle
*/

void print_triangle(int size)
{
	int a, b, c, d;

	d = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (a = 1 ; a <= size ; a++)
		{
			for (b = 1 ; b < d ; b++)
			{
				_putchar(' ');
			}
			for (c = (b - 1) ; c < size ; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
			d--;
		}
	}
}
