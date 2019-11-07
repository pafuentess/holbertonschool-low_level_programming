#include "holberton.h"

/**
* flip_bits - returns the number of bits you would
* need to flip to get from one number to another.
* @n: number to compare
* @m: number to compare
* Return: ammount of diferences
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, sum;

	i = m ^ n;
	sum = 0;

	while (i)
	{
		sum = sum + (i & 1);
		i >>= 1;
	}

	return (sum);
}
