#include <stdio.h>

/**
 * main - Prints base16 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 48;
	do {
		putchar(i);
		i++;
	} while (i < 58);

	i = 97;
	do {
		putchar(i);
		i++;
	} while (i < 103);
	putchar(10);

	return (0);
}
