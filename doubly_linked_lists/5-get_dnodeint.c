#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_dnodeint_at_index - Get node at given index
 *
 * @head: head of linked list
 * @index: Index to return
 * Return: Pointer to element at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (n < index)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
		n++;
	}
	return (node);
}
