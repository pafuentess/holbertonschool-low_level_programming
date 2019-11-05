#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - deletes the head node of a linked list
* @head: head of linked list
* Return:  the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *p, *q;
	int i;

	if (*head == NULL)
		return (0);

	q = *head;
	i = (*head)->n;
	p = (*head)->next;

	*head = p;
	free(q);

	return (i);
}
