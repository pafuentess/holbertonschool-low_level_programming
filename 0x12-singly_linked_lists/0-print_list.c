#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list.
* @h: list to print
* Return: number of lenght list
*/

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}
		return (i);
}
