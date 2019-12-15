#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index index
* @head: head of linked list
* @index: index to delete
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	tmp = *head;
	for (i = 0; i < index; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
