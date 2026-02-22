#include <stdio.h>
#include "main.h"

/**
 * main - entry
 *
 * Return: void
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!";
	char s3[] = "Hello";
	char s4[] = "Helloo";
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

	printf("%s\n", _strcat(s1, s2));

	printf("%s\n", _strncat(s1, s2, 2));

	printf("%s\n", _strncpy(s1, s2, 5));

	printf("%d\n", _strcmp(s3, s4));

	reverse_array(a, 9);

	return (0);
}
