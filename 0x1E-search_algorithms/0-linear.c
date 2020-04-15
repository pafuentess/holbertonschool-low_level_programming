#include "search_algos.h"

/**
* linear_search - function that searches for
* a value in an array of integers using the Linear
* @array: where to search
* @size: size of array
* @value: value to find
* Return: index where find the value
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array)
	{
		for (i = 0 ; i < size ; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
