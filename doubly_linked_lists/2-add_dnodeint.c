#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint - Add node to beginning of list
 *
 * @head: Pointer to pointer to head of list
 * @n: Int to put in node
 * Return: Address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
