#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints every number between n and 98 inclusive
 *
 * @n: start point
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
