#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - Add a node to linked list at head
 *
 * @head: Previous head of list
 * @str: String to put in node
 * Return: Address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = 0;
	while (str[new->len] != '\0')
		new->len++;
	new->next = *head;
	*head = new;
	return (new);
}
