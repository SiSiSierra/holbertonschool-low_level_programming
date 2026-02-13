#include <stdio.h>

/**
 * main - Prints base10 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 0;
	do {
		printf("%d", i);
		i++;
	} while (i < 10);
	putchar(10);

	return (0);
}
