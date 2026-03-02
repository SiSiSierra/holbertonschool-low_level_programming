#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Make a 2d array of zeroes
 *
 * @width: Size of sub array
 * @height: Size of main array
 * Return: Point to main array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **main;

	if (width <= 0 || height <= 0)
		return (NULL);

	main = malloc(height * 8);
	if (main == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		int j;
		int *sub = malloc(width * 4);

		if (sub == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			sub[j] = 0;
		main[i] = sub;
	}
	return (main);
}
