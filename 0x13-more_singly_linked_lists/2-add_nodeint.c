#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - add new node at the inicio
* @head: list
* @n: int to copy in the new node
* Return: new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;
	new_node->n = n;

	return (new_node);
}
