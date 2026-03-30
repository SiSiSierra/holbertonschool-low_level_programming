#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 *
 * @size: The size of the array
 * Return: Pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t *hn;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	hn = malloc(sizeof(hash_node_t *) * size);
	if (hn == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->array = &hn;

	return (ht);
}
