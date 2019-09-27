#include "holberton.h"

/**
* more_numbers - from 0 to 14 10 times
*/

void more_numbers(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		int num;

		for (num = 0 ; num < 15 ; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

	_putchar('\n');
	}
}
