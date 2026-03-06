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
	double *d;

	c = malloc_checked(sizeof(char) * 1024);
	d = malloc_checked(INT_MAX);
	printf("%p\n%p\n", (void *)c, (void *)d);

	return (0);
}
