#include "holberton.h"

/**
* get_endianness - function that
* checks the endianness
* Return: 0 if big endian,  1 if little endian
*/

int get_endianness(void)
{
	unsigned int i;
	char *c = (char *) &i;

	i = 0x76543210;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
