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
		free_list(head);
	free(head->str);
	free(head);
}
/**
 * add_node_end - Add a node at the end of a linked list
 *
 * @head: Pointer to head of list
 * @str: String to put in node
 * Return: Address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free_list(*head);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free_list(*head);
		return (NULL);
	}
	new->len = 0;
	while (new->str[new->len] != '\0')
		new->len++;
	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (new);

}
