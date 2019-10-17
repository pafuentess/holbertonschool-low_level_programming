#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates
* memory using malloc
* @b: size of memory
* Return: ar with memory allocation
*/

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);

	if (ar == NULL)
	{
		exit(98);
	}

	return (ar);

}
