#include "holberton.h"

/**
* print_line - print a continues line
* @n: the limit of the continue lines
*/

void print_line(int n)
{
	int a = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a <= n)
		{
			_putchar(95);
			++a;
		}

	_putchar('\n');

	}
}
