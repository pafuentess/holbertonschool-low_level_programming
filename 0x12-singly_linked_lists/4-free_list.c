#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a list
* @head: list to free
* Return: void
*/
void free_list(list_t *head)
{
	list_t *st, *str;

	st = head;
	while (st != NULL)
	{
		str = st;
		free(st->next);
		free(st);
		st = str;
	}
}
