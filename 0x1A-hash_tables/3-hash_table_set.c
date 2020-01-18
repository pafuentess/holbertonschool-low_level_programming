#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* add_node - add new node at the inicio
* @key: list
* @value: string to copy in the new node
* Return: new node
*/

hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
* hash_table_set - adds an element to the hash table.
* @ht: hash table you want to add or update
* @key: key is the key
* @value: the value associated with the key.
* Return: (1) if succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node, *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	node = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(node->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	node = add_node(key, value);
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	return (1);
}
