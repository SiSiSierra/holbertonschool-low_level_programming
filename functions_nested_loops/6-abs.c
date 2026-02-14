#include "main.h"

/**
 * _abs - Computes the absolute of given int
 * @n: The int to compute
 *
 * Return: The absolute of the input
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
