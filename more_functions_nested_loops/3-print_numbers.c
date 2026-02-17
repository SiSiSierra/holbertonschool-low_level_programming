#include "main.h"

/**
 * print_numbers - print 0 thru 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
