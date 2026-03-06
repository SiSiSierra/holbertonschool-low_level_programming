#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate an array of zeroes
 *
 * @nmemb: Amount of elements
 * @size: Element byte size
 * Return: Pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *arrayc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	arrayc = array;
	for (i = 0; i < nmemb * size; i++)
		arrayc[i] = 0;
	return (array);
}
