#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * sum_dlistint - Sum the contents of each node in linked list
 *
 * @head: Head of linked list
 * Return: Sum of member n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int n = 0;

	if (node == NULL)
		return (0);
	n += node->n;
	while (node->next != NULL)
	{
		node = node->next;
		n += node->n;
	}
	return (n);
}
