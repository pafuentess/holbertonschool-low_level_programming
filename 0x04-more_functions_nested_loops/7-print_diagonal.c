#include "holberton.h"

/**
* print_diagonal - print a triangle
* @n: the limit for triangle
*/


void print_diagonal(int n)
{
	int a = 1;
	int b = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= n ; a++)
		{
			for (b = 1 ; b <= a ; b++)
			{
				if (b < a)
				{
					_putchar(' ');
				}
				else if (a == b)
				{
					_putchar(92);
				}
			}
			_putchar('\n');
		}
	}
}
