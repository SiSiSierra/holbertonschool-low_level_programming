#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Search array for condition in function
 *
 * @array: Array of ints
 * @size: Size of array
 * @cmp: Function testing given int
 * Return: Index of first non-zero result in cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
