#include "holberton.h"
#include <stdio.h>

/**
* get_bit - returns the value of a
* bit at a given index.
* @n: binary number
* @index: index to return
* Return: value of an index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
