#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 97;
	do {
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
		i++;
	} while (i < 123);
	putchar(10);

	return (0);
}
