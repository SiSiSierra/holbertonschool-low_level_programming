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

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	free(c);

	c = string_nconcat("", "School!!!!!", 77);
	printf("%s\n", c);
	free(c);

	c = (char *)_calloc(10, 5);
	c[22] = 10;
	printf("%d%d%d\n", c[0], c[22], c[49]);

	return (0);
}
