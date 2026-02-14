#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowers
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	do {
		_putchar (i);
		i++;
	} while (i < 123);
	_putchar(10);
}

void print_alphabet_x10(void)
{
	int i;

	i = 0;
	do {
		print_alphabet();
		i++;
	} while (i < 10);
}
