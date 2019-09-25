#include "holberton.h"

/**
* print_last_digit - print the last digit of a number.
* @n: number to evaluate
* Return: (a)
*/


int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = ((n * (-1)) % 10);
	}

	else if (n >= 0)
	{
		a = n % 10;
	}
		_putchar(a + '0');
		return (a);
}
