#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint - add node in the beggin
* @head: head of linked list
* @n: int to fill the node
* Return: the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	new_node->n = n;

	return (new_node);
}
