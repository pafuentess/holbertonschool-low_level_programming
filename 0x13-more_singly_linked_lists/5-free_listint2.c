#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - frees a list
* @head: list to free
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *st;

	if (head == NULL)
		return;

	while (*head)
	{
		st = (*head)->next;
		free(*head);
		*head = st;
	}
	head = NULL;
}
