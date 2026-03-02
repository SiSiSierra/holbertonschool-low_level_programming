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

	array = create_array(10, 66);
	if (array == NULL)
	{
		printf("Array creation failed");
	}

	printf("%c%c%c\n", array[0], array[4], array[9]);

	return (0);
}
