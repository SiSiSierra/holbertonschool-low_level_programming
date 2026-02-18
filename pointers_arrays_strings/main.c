#include <stdio.h>
#include "main.h"

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}

