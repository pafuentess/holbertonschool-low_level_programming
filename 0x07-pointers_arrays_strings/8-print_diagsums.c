#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - print the sum of diagonal
* @a: array to read
* @size: size of array
*/


void print_diagsums(int *a, int size)
{

	int b;
	int diagonal1;
	int diagonal2;
	int longitud;

	b = 0;
	diagonal1 = 0;
	diagonal2 = 0;
	longitud = size * size;

	while (b < longitud)
	{
		if (b % (size - 1) == 0 && b < longitud - 1 && b > 0)
		{
			diagonal2 = diagonal2 + *(a + b);
		}

		if (b % (size + 1) == 0 || b == 0)
		{
			diagonal1 = diagonal1 + *(a + b);
		}
		b++;
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}
