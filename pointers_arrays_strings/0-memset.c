#include "main.h"

/**
 * _memset - Fill a buffer with a char up to n slots
 *
 * @s: Given buffer
 * @b: Given char to fill with
 * @n: Depth of buffer to fill
 * Return: Pointer to buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
