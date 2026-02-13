#include <stdio.h>

/**
 * main - Prints every combination of single digits
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
		if (i < 58)
		{
			putchar(44);
			putchar(32);
		}
	} while (i < 58);
	putchar(10);

	return (0);
}
