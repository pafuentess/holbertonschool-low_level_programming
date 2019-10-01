#include "holberton.h"

/**
* _strlen - gives the lenght of string
* @s: the address of string to evaluate
* Return: (a) the lenght of string
*/

int _strlen(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		 a = a + 1;
	}

	return (a);

}

/**
* print_rev - print in reverse a string
* @s: the address of string to print
*/

void print_rev(char *s)
{
	int a, b, c, d, e;

	a = _strlen(s);

	for (b = a ; b >= 0 ; b--)
	{
		c = s[b];

		if (c == '\0')
		{
			d = b;
		}
	}

	for (e = d ; e >= 0 ; e--)
	{
		_putchar(s[e]);
	}

	_putchar('\n');
}
