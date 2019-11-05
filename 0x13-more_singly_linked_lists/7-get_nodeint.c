#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index -returns the nth node of
* a listint_t linked list.
* @head: pointer of head the linked list
* @index: index of nth node
* Return: head in the index position
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0 ; i < index ; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
