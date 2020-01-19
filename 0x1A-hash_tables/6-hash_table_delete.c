#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_delete - delete a hash table.
* @ht: the hash table
*/


void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *tmp, *node;

	if (ht == NULL || ht->array == NULL)
		return;

	for (i = 0 ; i < ht->size ; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");

			while (tmp)
			{
				node = tmp;
				tmp = tmp->next;
				free(node->key);
				free(node->value);
				free(node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
