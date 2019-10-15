#include "holberton.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: size of array
* @c: character to initialize
* Return: ar; array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return ('\0');

	}

	else
	{
		ar = malloc(size * sizeof(char));

		for (i = 0 ; i < size ; i++)
		{
			ar[i] = c;
		}

		free(ar);
		return (ar);
	}

}
