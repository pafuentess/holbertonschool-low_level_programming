#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL)
		return (0);
	
	hash = hash_djb2(key);

	return (hash % size);
}
