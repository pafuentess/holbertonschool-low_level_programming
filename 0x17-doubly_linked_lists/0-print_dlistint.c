#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - print linked list's elements
* @h: head linked list
* Return: number of nodes of linked list
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *tmp;

	tmp = h;
	i = 0;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
