#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Copy a string into new memory
 *
 * @str: Given string
 * Return: Pointer to new string
 */
char *_strdup(char *str)
{
	int i;
	char *array;
	int size;
	
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	size = i;
	array = malloc(size - 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
