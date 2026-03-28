#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - Print every list element
 *
 * @h: Head of linked list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	printf("%d\n", h->n);
	if (h->next == NULL)
		return (1);
	return (print_dlistint(h->next) + 1);
}
