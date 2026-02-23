#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Find the first occurance of any of a set of chars in a string
 *
 * @s: The string to check
 * @accept: The string to bytes to use as a filter
 * Return: Pointer to the first byte in s matching any from accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
