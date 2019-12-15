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
	dlistint_t *tmp1, *tmp2, *tmp3;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp1 = *head;
		*head = tmp1->next;
		if (tmp1->next != NULL)
			tmp1->next->prev = NULL;
		free(tmp1);
		return (1);
	}
	tmp1 = *head;
	tmp2 = tmp1->next;
	tmp3 = tmp2->next;
	for (i = 0 ; i < index - 1 ; i++)
	{
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
		tmp3 = tmp3->next;
	}
	tmp3->prev = tmp1;
	tmp1->next = tmp3;
	free(tmp2);
	if (tmp2->next == NULL)
		return (-1);
	return (1);

}
