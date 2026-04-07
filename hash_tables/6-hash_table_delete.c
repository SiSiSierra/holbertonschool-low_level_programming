#include "hash_tables.h"

/**
 * linked_list_delete - Frees memory of linked list
 *
 * @head: head of linked list
 * Return: void
 */
void linked_list_delete(hash_node_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		linked_list_delete(head->next);
	free(head->key);
	free(head->value);
	free(head);
}
/**
 * hash_table_delete - Delete a hash table
 *
 * @ht: Hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	while (i < ht->size)
	{
		linked_list_delete(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}


