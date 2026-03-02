#include "main.h"
#include <stdlib.h>

/**
 * create_array - Allocate an array and fill it with c
 *
 * @size: Size of the array
 * @c: Given char to fill the array
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
