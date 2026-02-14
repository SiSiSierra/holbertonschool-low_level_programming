#include "main.h"

/**
 * print_sign - Determines and prints the sign of a signed int
 * @n: The int to check
 *
 * Return: 1 if n is positive, 0 if 0, and -1 if negative
 */
int print_sign(int n)
{
	int isPos;

	isPos = 0;
	if (n > 0)
	{
		isPos = 1;
		_putchar(43);
	} else if (n < 0)
	{
		isPos = -1;
		_putchar(45);
	} else
	{
		_putchar(48);
	}

	return (isPos);
}
