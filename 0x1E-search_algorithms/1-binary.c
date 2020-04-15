#include "search_algos.h"

/**
* binary_recursion - function to to find the value
* @array: where to search
* @low: inferior limit of array
* @hight: superior limit of array
* @value: value to search
* Return: index value
*/

int binary_recursion(int *array, size_t low, size_t hight, int value)
{
	unsigned int mid1, i;

	if (low >= hight)
		return (-1);

	mid1 = low + (hight - low - 1) / 2;

	printf("Searching in array: ");
	for (i = low ; i < hight ; i++)
	{
		printf("%d", array[i]);
		if (i != hight - 1)
			printf(", ");
	}
	printf("\n");

	if (array[mid1] == value)
		return (mid1);
	else if (value < array[mid1])
		return (binary_recursion(array, low, mid1, value));
	return (binary_recursion(array, (mid1 + 1), hight, value));
}

/**
* binary_search - function that searches for a value in a
* sorted array of integers using the Binary search algorithm
* @array: where to find
* @size: size of array
* @value: value to search
* Return: index value
*/

int binary_search(int *array, size_t size, int value)
{
	unsigned int low, mid;

	if (array)
	{
		low = 0;
		mid = size / 2;

		if (array[mid] == value)
			return (mid);

		return (binary_recursion(array, low, size, value));
	}
	return (-1);
}
