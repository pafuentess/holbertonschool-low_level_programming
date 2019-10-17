#include "holberton.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @min: min value of arrange
* @max: max value of arrange
* Return: array
*/

int *array_range(int min, int max)
{
	int *ar, len, i;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	ar = malloc(len * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (i = 0 ; i <= (max - min) ; i++)
	{
		ar[i] = min + i;
	}

	return (ar);
}
