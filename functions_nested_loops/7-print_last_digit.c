#include "main.h"

/**
 * print_last_digit - Return the value of the last digit in n
 *
 * @n: The int to find the last digit of
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n *= -1;
	}
	m = n % 10 + 48;
	_putchar(m);
	return (m);
}
