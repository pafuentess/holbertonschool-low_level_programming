#include "holberton.h"

/**
* _puts_recursion - print a string
* @s: string to print
*/


void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	}

	else if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	s++;

	_puts_recursion(s);
}
