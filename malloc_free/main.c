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

	array = create_array(10, 66);
	if (array == NULL)
	{
		printf("Array creation failed\n");
	}

	printf("%c%c%c\n", array[0], array[4], array[9]);

	array2 = _strdup(array);
	if (array2 == NULL)
	{
		printf("Array creation failed\n");
	}
	printf("%c%c%c\n", array[0], array[4], array[9]);

	return (0);
}
