#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array
* @nmemb: elements
* @size: size elements
* Return: ar: pointer with memory allocate
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ar;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		ar[i] = 0;
	}

	return (ar);
}
