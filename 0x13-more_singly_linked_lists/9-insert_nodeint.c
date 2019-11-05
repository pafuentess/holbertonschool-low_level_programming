#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts a new
* node at a given position.
* @head: head of list
* @idx: index of node
* @n: int to put in the new node
* Return: new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t  *st, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	st = *head;

	for (i = 0 ; i < idx - 1 ; i++)
	{
		if (st == NULL || st->next == NULL)
			return (NULL);

		st = st->next;
	}

	new_node->next = st->next;
	st->next = new_node;

	return (new_node);
}
