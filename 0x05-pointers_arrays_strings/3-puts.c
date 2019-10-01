#include "holberton.h"

/**
* _puts - print strings
* @str: the string to print
*/


void _puts(char *str)
{
	int a;
	char b;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		b = str[a];
		_putchar(b);
	}
	_putchar('\n');
}
