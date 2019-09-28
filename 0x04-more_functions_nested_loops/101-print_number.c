#include "holberton.h"

/**
* num_9 - prints number
* @n: number to print
*/

void num_9(int n)
{
	_putchar(n + '0');
}

/**
* mayor9 - prints a number <9
*@n: number to print
*/

void mayor9(int n)
{
	int a, b;

	a = n / 10;
	b = n % 10;

	_putchar(a + '0');
	_putchar(b + '0');
}

/**
* mayor99 - print a number > 9
* @n: number to print
*/

void mayor99(int n)
{
	int a, b, c;

	a = n / 100;
	b = n % 100;
	_putchar(a + '0');
	mayor9(b);
}

/**
* mayor999 - print a number > 999
* @n: number to print
*/

void mayor999(int n)
{
	int a, b, c;

	a = n / 1000;
	b = n % 1000;
	_putchar(a + '0');
	mayor99(b);
}

/**
* print_number - prints numbers
*@n: number to print
*/

void print_number(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
		if (n < 9)
		{
			num_9(n);
		}
		else if (n > 9 && n <= 99)
		{
			mayor9(n);
		}
		else if (n > 99 && n <= 999)
		{
			mayor99(n);
		}
		else if (n > 999 && n <= 9999)
		{
			mayor999(n);
		}
	}
	else if (n >= 0)
	{
		if (n < 9)
		{
			num_9(n);
		}
		else if (n > 9 && n <= 99)
		{
			mayor9(n);
		}
		else if (n > 99 && n <= 999)
		{
			mayor99(n);
		}
		else if (n > 99 && n <= 9999)
		{
			mayor999(n);
		}
	}
}
