#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node in linked list
 *
 * @head: Head of linked list
 * @index: Index to delete
 * Return: 1 for success, -1 for fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = *head;

	if (node == NULL)
		return (-1);
	while (i < index)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
		i++;
	}
	if (i == 0)
		*head = node->next;
	if (node->prev != NULL)
		node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	free(node);
	return (1);
}
