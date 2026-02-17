#include "main.h"

/**
 * print_line - print _ n times
 *
 * @n: Iterations of printing _
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
