#include "function_pointers.h"

/**
* int_index - function that searches for an integer.
* @array: where to search the integer
* @size: lenght of array
* @cmp: function pointer
* Return: return the index of match
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		res = cmp(array[i]);

		if (res)
			return (i);
	}

	return (-1);
}
