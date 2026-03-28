#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Get length of linked list
 *
 * @h: Start of singly linked list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (list_len(h->next) + 1);
}
