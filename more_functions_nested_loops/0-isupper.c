#include "main.h"

/**
 * _isupper - Check if c is upper or lower case char
 *
 * @c: The ASCII code to check
 * Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
