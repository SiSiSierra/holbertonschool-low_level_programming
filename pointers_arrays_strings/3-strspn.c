#include "main.h"

/**
 * _strspn - Return the minimum length of s that passes filter accept
 *
 * @s: The string to check
 * @accept: The string to bytes to use as a filter
 * Return: The amount of initial bytes in s containing bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0' && accept[j] != s[i])
		{
			return (i);
		}
	}
	return (i);
}
