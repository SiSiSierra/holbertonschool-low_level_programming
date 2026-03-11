#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Execute a function for each array element
 *
 * @array: Collection of ints
 * @size: Size of array
 * @action: Function to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
