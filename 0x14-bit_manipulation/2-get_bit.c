#include "holberton.h"

/**
* get_bit - returns the value of a
* bit at a given index.
* @n: binary number
* @index: index to return
* Return: value of an index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int st[10000], i;

	i = 0;
	while (n != 0)
	{
		st[i] = n & 1;
		n = n >> 1;
		i++;
	}

	if (st[index] == NULL)
		return (-1);

	return (st[index]);
}
