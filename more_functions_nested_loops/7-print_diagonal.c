#include "main.h"

/**
 * print_diagonal - print \ n times in a diagonally aligned fashion
 *
 * @n: Iterations of printing \
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
	if (n < 1)
	{
		_putchar(10);
	}
}
