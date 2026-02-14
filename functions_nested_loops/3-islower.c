#include "main.h"

/**
 * _islower - Determine if a given char is lower or upper
 * @c: ASCII code to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int isLower;

	if (c >= 97 && c <= 122)
	{
		isLower = 1;
	} else
	{
		isLower = 0;
	}

	return (isLower);
}
