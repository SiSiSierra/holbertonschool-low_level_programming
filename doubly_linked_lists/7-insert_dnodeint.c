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
		if (node->next == NULL && i == idx - 1)
			break;
		if (node->next == NULL && i < idx)
			return (NULL);
		node = node->next;
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = node;
		new->prev = NULL;
		node->prev = new;
		*h = new;
	} else if (node->next == NULL && i == idx - 1)
	{
		new->next = NULL;
		new->prev = node;
		node->next = new;
	} else
	{
		node->prev->next = new;
		new->prev = node->prev;
		new->next = node;
		node->prev = new;
	}
	return (new);
}
