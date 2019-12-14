#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_dlistint - free linked list
* @head: head of linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *st;

	while (head)
	{
		st = head->next;
		free(head);
		head = st;
	}
}

