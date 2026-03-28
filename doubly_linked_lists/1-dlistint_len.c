#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - Get length of linked list
 *
 * @h: Head of linked list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	return (dlistint_len(h->next) + 1);
}
