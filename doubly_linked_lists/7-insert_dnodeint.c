#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Add node to linked list at index
 *
 * @h: Head of list
 * @idx: Index to insert at
 * @n: Int to put in new node
 * Return: Address of new node
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
		i++;
		if (i == idx)
			break;
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (node->next == NULL)
	{
		new->next = NULL;
		new->prev = node;
		node->next = new;
	} else
	{
		new->next = node;
		new->prev = node->prev;
		new->prev->next = new;
	}
	return (new);
}
