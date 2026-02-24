#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sums of the diagonals in a matrix
 *
 * @a: Given matrix
 * @size: Bound of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int acc = 0;

	for (i = 0; i < size; i++)
	{
		acc += a[size * i + i];
	}
	printf("%d, ", acc);
	acc = 0;
	i = size - 1;
	for (j = 0; j < size; j++)
	{
		acc += a[size * j + i];
		i--;
	}
	printf("%d\n", acc);
}
