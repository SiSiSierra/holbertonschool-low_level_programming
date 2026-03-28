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
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	while (i < idx)
	{
		if (node->next == NULL && i == idx - 1)
			break;
		if (node->next == NULL && i < idx)
			return (NULL);
		node = node->next;
		i++;
	}
	if (node == NULL || idx == 0)
		*h = new;
	if (i == idx - 1)
	{
		new->prev = node;
		node->next = new;
	} else if (node != NULL)
	{
		if (idx != 0)
			node->prev->next = new;
		new->prev = node->prev;
		new->next = node;
		node->prev = new;
	}
	return (new);
}
