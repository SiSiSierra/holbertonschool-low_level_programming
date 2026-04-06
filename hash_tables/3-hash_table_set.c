#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

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
	index = key_index(key, ht->size);
	*(ht->array)[index] = hn;
	printf("%p\n%p\n", (void *)hn, (void *)*(ht->array)[index]);

	return (1);
}
