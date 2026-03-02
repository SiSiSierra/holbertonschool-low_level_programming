#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	char *array;
	char *array2;
	char *array3;
	int **array4;

	array = create_array(10, 66);
	if (array == NULL)
	{
		printf("Array creation failed\n");
	}

	printf("%s\n", array);

	array2 = _strdup(array);
	if (array2 == NULL)
	{
		printf("Array creation failed\n");
	}
	printf("%s\n", array2);

	array3 = str_concat(array, "hello");
	if (array3 == NULL)
	{
		printf("Array creation failed\n");
	}
	printf("%s\n", array3);

	array4 = alloc_grid(4, 2);
	if (array4 == NULL)
		printf("Array creation failed\n");
	printf("%d%d%d\n", array4[0][0], array4[3][1], array4[2][0]);

	return (0);
}
