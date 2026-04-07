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
	hash_node_t *hn, *cache;
	int index;

	if (ht == NULL)
		return (0);
	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
		return (0);
	if (strlen(key) == 0)
	{
		free(hn);
		return (0);
	}
	hn->key = strdup((char *) key);
	hn->value = strdup(value);
	hn->next = NULL;
	index = key_index((unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = hn;
	else
	{
		cache = ht->array[index];
		while (strcmp(cache->key, hn->key) != 0)
		{
			if (cache->next == NULL)
			{
				hn->next = ht->array[index];
				ht->array[index] = hn;
				return (1);
			}
			cache = cache->next;
		}
		free(cache->value);
		free(hn->key);
		cache->value = hn->value;
		free(hn);
	}
	return (1);
}
