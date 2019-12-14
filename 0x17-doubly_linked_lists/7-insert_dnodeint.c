#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - insert a new node at index
* @h: head linked list
* @idx: index to insert a node
* @n: int to fill the new node
* Return: new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp1, *tmp2;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx != 0)
	{
		tmp2 = *h;
		for (i = 0; i < idx - 1 && tmp2 != NULL; i++)
			tmp2 = tmp2->next;
		if (tmp2 == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		tmp1 = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = tmp2;
		tmp1 = tmp2->next;
		tmp2->next = new_node;
	}
	new_node->next = tmp1;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
