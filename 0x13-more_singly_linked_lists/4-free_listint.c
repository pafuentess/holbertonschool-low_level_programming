#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees a list
* @head: list to free
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *st;

	while (head)
	{
		st = head->next;
		free(head);
		head = st;
	}
}
