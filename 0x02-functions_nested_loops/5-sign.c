#include "holberton.h"

/**
* print_sign - prints the sign of a number.
* @n: the value to evaluate
* Return: (a) and print b
*/

int print_sign(int n)
{
	int a;

	char b;

	if (n > 0)
	{
		a = 1;
		b = 43;
	}

	else if (n < 0)
	{
		a = 1;
		b = 45;
	}

	else if (n == 0)
	{
		a = 0;
		b = 48;
	}

	return (_putchar(b), a);
}
