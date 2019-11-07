#include "holberton.h"
#include <stdio.h>

/**
* binary_to_uint - Write a function that converts
* a binary number to an unsigned int.
* @b: binary number
* Return: unsigned int number
*/

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int sum;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	sum = 0;

	for (j = 0 ; b[j] != '\0' ; j++)
	{
		sum <<= 1;
		if (b[j] == '1')
			sum = sum + 1;
	}

	return (sum);
}
