#include "main.h"
#include <stdio.h>

/**
 * print_array - print the integers in an array up to index n
 *
 * @a: Given array of ints
 * @n: Array depth
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
