#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;

	index = hash_djb2(key);

	ht->array[index]->vale = stdrup(value)
}
