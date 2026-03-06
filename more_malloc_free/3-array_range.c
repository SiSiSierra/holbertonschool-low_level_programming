#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create a sorted array of every int between min and max
 *
 * @min: Lower
 * @max: Higher
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
		array[i] = min + i;
	return (array);
}
