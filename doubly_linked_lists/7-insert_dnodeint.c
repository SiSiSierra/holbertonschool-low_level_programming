#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Add node to linked list at index
 *
 * @h: Head of list
 * @idx: Index to insert at
 * @n: Int to put in new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	dlistint_t *new;
	unsigned int i = 0;

	if (node == NULL)
		return (NULL);
	while (i < idx)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = node->prev;
	new->next = node;
	new->prev->next = new;
	return (new);
}
