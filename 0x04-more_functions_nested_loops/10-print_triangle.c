#include "holberton.h"

/**
* print_triangle - print a triangle
* @size: base and height of triangle
*/

void print_triangle(int size)
{
	int a, b;

	if (size == 0)
	{
		_putchar('\n');
	}

	else
	{
		for (a = 1 ; a <= size ; a++)
		{
			for (b = 0 ; b < size ; b++)
			{
				if (b < (size - a))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
