#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of a list.
* @h: list to print
* Return: number of lenght list
*/

size_t print_listint(const listint_t *h)
{
	unsigned int i;

	i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
