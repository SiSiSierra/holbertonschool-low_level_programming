#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - Frees memory of linked list
 *
 * @head: head of linked list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	if (head->str != NULL)
		free(head->str);
	free(head);
}
