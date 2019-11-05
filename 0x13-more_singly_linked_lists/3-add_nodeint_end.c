#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - add new node at the end
* @head: list
* @n: int to copy in the new node
* Return: new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *st;

	st = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

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
