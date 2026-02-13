#include <stdio.h>

/**
 * main - Prints the alphabet twice in alternating case
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 97;
	do {
		putchar(i);
		i++;
	} while (i < 123);
	i = 65;
	do {
		putchar(i);
		i++;
	} while (i < 91);
	putchar(10);

	return (0);
}
