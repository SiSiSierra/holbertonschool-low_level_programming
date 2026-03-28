#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Print every element in linked list
 *
 * @h: Start of singly linked list
 * Return: Number of elements
 */
size_t print_list(const list_t *h)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %.*s\n", h->len, h->len, h->str);
	if (h->next != NULL)
		return (print_list(h->next) + 1);
	return (1);
}
