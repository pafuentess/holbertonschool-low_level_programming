#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* key_index - function that gives you the index of a key.
* @key: is the key
* @size: size of the array of the hash table
* Return: the index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}
