#include "main.h"

/**
 * _isalpha - Determine if a given char is from the alphabet
 * @c: ASCII code to be checked
 *
 * Return: 1 if c is a roman letter, 0 otherwise
 */
int _isalpha(int c)
{
	int isAlpha;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		isAlpha = 1;
	} else
	{
		isAlpha = 0;
	}

	return (isAlpha);
}
