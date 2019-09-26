#include "holberton.h"

/**
* print_square - draw a square
* @size: give the longitud of the size
*/

void print_square(int size)
{

	int a = 0;
	int b = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= size ; a++)
		{
			for (b = 1 ; b <= size ; b++)
			{
				_putchar(35);
				if (b == size)
				{
					_putchar('\n');
				}
			}
		}

	}
}
