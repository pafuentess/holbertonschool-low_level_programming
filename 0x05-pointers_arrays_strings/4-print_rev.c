#include "holberton.h"

/**
* print_rev - print inverse a string
* @s: string to print
*/


void print_rev(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		a = a + 1;
	}

	for ((a = a - 1) ; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
