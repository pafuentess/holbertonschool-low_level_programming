#include "lists.h"
#include <stdio.h>

/**
* listint_len - count members of list
* @h: list to print
* Return: number of lenght list
*/

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
