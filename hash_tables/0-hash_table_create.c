#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_create - Create a hash table
 *
 * @size: The size of the array
 * Return: Pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}
	return (ht);
}
