#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a
* dimensional array of integers.
* @width: width of array
* @height: height of array
* Return: pointer with array
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = malloc((height) * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		ar[i] = malloc(width * sizeof(int));

		if (ar[i] == NULL)
		{
			for (j = i ; i >= 0 ; j--)
			{
				free(ar[j]);
			}
			free(ar);
			return (NULL);
		}
	}

	for (i = 0 ; i < height ; ++i)
	{
		for (j = 0 ; j < width ; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);

}
