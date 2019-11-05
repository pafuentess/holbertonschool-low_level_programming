#include "lists.h"
#include <stdlib.h>

/**
* reverse_listint - reverses a linked list.
* @head: head of list
* Return: head in new position
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *curNode;

	prevNode = *head;
	*head = (*head)->next;
	curNode = *head;

	if(*head == NULL || curNode == NULL)
		return (NULL);

	prevNode->next = NULL;

	while (curNode)
	{
		curNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = curNode;
	}

	*head = prevNode;

	return (*head);
}
