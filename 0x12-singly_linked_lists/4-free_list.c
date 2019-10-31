#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a list
* @head: list to free
* Return: void
*/
void free_list(list_t *head)
{
	list_t *st;

	while (head != NULL)
	{
		st = head;
		head = head->next;
		free(st);
	}
}
