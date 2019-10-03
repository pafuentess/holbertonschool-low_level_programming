#include "holberton.h"

/**
* reverse_array - reverse the array
* @a: array to change
* @n: lenght of array
*/


void reverse_array(int *a, int n)
{
	int b, c, d;

	c = 0;
	d = n - 1;
	for (b = 0; b < n / 2; b++)
	{
		c = a[d];
		a[d] = a[b];
		a[b] = c;
		d--;
	}
}
