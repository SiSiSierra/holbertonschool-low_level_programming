#include "main.h"

/**
 * print_triangle - print # in a triangle of dimensions n
 *
 * @size: Height and width of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(32);
		}
		for (j = 0; j < i + 1; j++)
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
