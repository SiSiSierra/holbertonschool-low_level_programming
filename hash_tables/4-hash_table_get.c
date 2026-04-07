#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieve a value from a hash table
 *
 * @ht: Hash table
 * @key: Key to use
 * Return: Value from key from ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *cache = ht->array[index];

	if (cache == NULL)
		return (NULL);
	while (strcmp(cache->key, key) != 0)
	{
		if (cache->next == NULL)
			return (NULL);
		cache = cache->next;
	}
	return (cache->value);
}
