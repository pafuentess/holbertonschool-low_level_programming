#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shell.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *st;

	st = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head != NULL)
	{
		while (st->next != NULL)
		{
			st = st->next;
		}
		st->next = new_node;
	}
	else
		*head = new_node;



	return (new_node);
}
