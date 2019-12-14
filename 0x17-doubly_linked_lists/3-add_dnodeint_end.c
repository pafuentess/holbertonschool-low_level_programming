#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint_end - add a node at the end of list
* @head: head of linked list
* @n: number to fill the node
* Return: the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *st;

	st = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head != NULL)
	{
		while (st->next != NULL)
		{
			st = st->next;
		}
		st->next = new_node;
		new_node->prev = st;
	}
	else
		*head = new_node;

	return (new_node);
}


