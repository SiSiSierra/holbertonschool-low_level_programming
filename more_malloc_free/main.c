#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - program
 *
 * Return: Exit status, 0 for good :)
 */
int main(void)
{
	char *c;
	int *i;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	free(c);

	c = string_nconcat("", "School!!!!!", 77);
	printf("%s\n", c);
	free(c);

	c = (char *)_calloc(10, 5);
	c[22] = 10;
	printf("%d%d%d\n", c[0], c[22], c[49]);
	free(c);

	printf("%d\n", 98 - 0);
	i = array_range(-2048, 500);
	printf("%d%d%d\n", i[0], i[2], i[5]);
	free(i);

	return (0);
}
