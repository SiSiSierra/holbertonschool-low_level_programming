#include "main.h"

/**
 * _sqrt_recursion - Find the square root of n
 *
 * @n: given number
 * Return: Sqaure root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_cmp(1, n));
}

/**
 * square_cmp - Compare a squared number to a target
 *
 * @n: The number to square
 * @base: The number to compare to
 * Return: n if n^2 is base, or -1
 */
int square_cmp(int n, int base)
{
	if (n * n == base)
	{
		return (n);
	}
	if (n * n > base)
	{
		return (-1);
	}
	return (square_cmp(n + 1, base));
}
