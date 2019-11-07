#include "holberton.h"
#include <stdio.h>

/**
* set_bit - sets the value of a bit
* @n: binary number
* @index: index to return
* Return: 1 if work -1 if fail
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | (1 << index);

	return (-1);
}
