#include "lists.h"
#include <stdlib.h>

/**
* sum_dlistint - sum of all the data (n)
* of a listint_t linked list.
* @head: head of a linked list
* Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);

}
