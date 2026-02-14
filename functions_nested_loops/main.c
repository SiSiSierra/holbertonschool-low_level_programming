#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	printf("Output of Task 1 -----\n");
	print_alphabet();

	printf("Output of Task 2 -----\n");
	print_alphabet_x10();

	return (0);
}
