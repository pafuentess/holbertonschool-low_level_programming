#include "holberton.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nuevamemoria;
	char *copianuevamemoria, *copiaptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	
	nuevamemoria = malloc(new_size);
	if (nuevamemoria == NULL)
		return (NULL);
	
	if (ptr == NULL)
		return (nuevamemoria);

	copianuevamemoria = nuevamemoria;
	copiaptr = ptr;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		copianuevamemoria[i] = copiaptr[i];
	}
	free(ptr);
	return (nuevamemoria);
}
