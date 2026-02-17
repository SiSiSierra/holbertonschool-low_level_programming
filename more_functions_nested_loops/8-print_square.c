#include "main.h"

/**
 * print_square - print # in a square of dimensions n
 *
 * @size: Height and width of square
 * Return: void
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	if (size < 1)
	{
		_putchar(10);
	}
}
