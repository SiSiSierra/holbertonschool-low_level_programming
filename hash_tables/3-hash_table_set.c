#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
 * hash_table_set - Add an element to a hash table
 *
 * @ht: Hash table to add to
 * @key: Key of element
 * @value: Value of element
 * Return: 1 for success, 0 for fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	char *key2, *value2;
	int index;

	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
		return (0);
	if (strlen(key) == 0)
	{
		free(hn);
		return (0);
	}
	key2 = strdup(key);
	hn->key = key2;
	value2 = strdup(value);
	hn->value = value2;
	index = key_index((unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = hn;
	else if (strcmp(hn->key, ht->array[index]->key) != 0)
	{
		index = 0;
		ht->array[0] = hn;
	}
	else
	{
		ht->array[index]->value = hn->value;
		free(hn->key);
		free(hn);
	}
	return (1);
}
