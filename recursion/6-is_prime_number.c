#include "main.h"

/**
 * is_prime_number - Check if n is a prime
 *
 * @n: Number to check
 * Return: 1 for yes, 0 for no
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_cmp(2, n));
}

/**
 * prime_cmp - Compare a factor to a potential prime
 *
 * @n: Factor to check
 * @base: Prime candidate
 * Return: 1 if base is prime, 0 if not
 */
int prime_cmp(int n, int base)
{
	if (n > base / 2)
	{
		return (1);
	}
	if (base % n == 0)
	{
		return (0);
	}
	return (prime_cmp(n + 1, base));
}
