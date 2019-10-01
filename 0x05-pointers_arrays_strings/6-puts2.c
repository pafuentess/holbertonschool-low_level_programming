#include "holberton.h"

/**
* puts2 - prints one yes one not
*@str: string to evaluate
*/

void puts2(char *str)
{
	int a, b;

	while (str[a] != '\0')
	{
		++a;
	}

	for (b = 0 ; b < a ; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
