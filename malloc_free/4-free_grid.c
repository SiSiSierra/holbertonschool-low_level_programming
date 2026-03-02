#include "main.h"
#include <stdlib.h>


/**
 * free_grid - Free memory used to make a grid
 *
 * @grid: grid to free
 * @height: amount of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
