#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_print - prints a hash table.
* @ht: the hash table
*/


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	for (i = 0 ; i < ht->size ; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");

			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
					if (tmp->next != NULL)
						printf(", ");
					tmp = tmp->next;
			}
			flag = 1;
		}
	}
	printf("}\n");
}
