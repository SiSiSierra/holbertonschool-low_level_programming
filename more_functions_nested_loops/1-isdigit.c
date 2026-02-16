#include "main.h"

/**
 * _isint - Check if c is an ASCII digit
 *
 * @c: The ASCII code to check
 * Return: 1 if a digit, 0 otherwise
 */
int _isint(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
