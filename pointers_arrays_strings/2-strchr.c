#include "main.h"
#include <stddef.h>

/**
 * _strchr - Find a character in a string
 *
 * @s: Given string
 * @c: Char to find
 * Return: Pointer to first occurance of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return(&s[i]);
		}
	}
	if (s[i] == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
