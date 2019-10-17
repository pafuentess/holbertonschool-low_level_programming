#include "holberton.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	
	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);

	return (ar);
}
