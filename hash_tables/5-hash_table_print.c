#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Print a hash table
 *
 * @ht: Hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *cache;
	char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		cache = ht->array[i];
		while (cache != NULL)
		{
			if (flag)
				printf(", ");
			printf("\'%s\': \'%s\'", cache->key, cache->value);
			flag = 1;
			cache = cache->next;
		}
		i++;
	}
	printf("}");
}

