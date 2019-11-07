#include "holberton.h"
#include <stdio.h>

/**
* print_binary - prints the binary
* representation of a number.
* @n: number to convert
*/


void print_binary(unsigned long int n)
{
	int st[100000], j, i = 0;

	if (n == 0)
		_putchar('0');
	while (n != 0)
	{
		st[i] = n & 1;
		n = (n >> 1);
		i++;
	}

	for (j = (i - 1) ; j >= 0 ; j--)
	{
		_putchar(st[j] + '0');
	}

}

