#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes the node at index
* @head: head of linked list
* @index: index to delete node
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *q;
	unsigned int i;

	q = *head;
	if (q == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(q);
		return (1);
	}

	for (i = 0 ; i < index - 1 ; i++)
	{
		if (q->next == NULL)
			return (-1);

		q = q->next;
	}

	p = q->next;
	q->next = p->next;
	free(p);

	return (1);
}
