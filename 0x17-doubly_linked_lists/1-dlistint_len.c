#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - return number of elements
* of linked lists
* @h: head linked list
* Return: len of linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *tmp;

	tmp = h;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
