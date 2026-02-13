#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 122;
	do {
		putchar(i);
		i--;
	} while (i > 96);
	putchar(10);

	return (0);
}
