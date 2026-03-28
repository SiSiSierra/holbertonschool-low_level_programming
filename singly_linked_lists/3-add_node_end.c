#include "lists.h"
#include <string.h>
#include <stdlib.h>

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
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free_list(*head);
		free(new->str);
		free(new);
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
