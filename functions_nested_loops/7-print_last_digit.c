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

	m = _abs(n % 10);
	_putchar(m + 48);
	return (m);
}
