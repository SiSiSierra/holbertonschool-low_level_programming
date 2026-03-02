#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - Concatenate two strings in new memory
 *
 * @s1: First given string
 * @s2: Second given string
 * Return: Pointer to array if successful, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int size;
	char *array;

	if (s1 == NULL)
		s1 = "";
	else
		for (i = 0; s1[i] != '\0'; i++)
		{}
	if (s2 == NULL)
		s2 = "";
	else
		for (j = 0; s2[j] != '\0'; j++)
		{}

	size = i + j;

	array = malloc(size + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		array[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		array[i + j] = s2[j];
	array[i + j] = '\0';

	return (array);
}
