#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_dlistint - Frees memory of linked list
 *
 * @head: head of linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_dlistint(head->next);
	free(head);
}
