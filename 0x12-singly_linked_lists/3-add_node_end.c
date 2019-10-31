#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* _strlen - define the leng of a array
* @s: array to evaluate
* Return: (a): the lenght of array
*/

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		++a;
	}

	return (a);
}


/**
* add_node_end - add new node at the end
* @head: list
* @str: string to copy in the new node
* Return: new node
*/

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
	new_node->len = _strlen(new_node->str);

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
