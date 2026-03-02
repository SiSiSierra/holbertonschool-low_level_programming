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
	int i;
	int j;
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

	array4 = alloc_grid(48, 32);
	if (array4 == NULL)
		printf("Array creation failed\n");
	array4[20][20] = 5;
	array4[31][31] = 5;
	for (i = 0; i < 32 ; i++)
	{
		for (j = 0; j < 48; j++)
			printf("%d,", array4[i][j]);
		printf("[<-- %d\n", i);
	}

	return (0);
}
