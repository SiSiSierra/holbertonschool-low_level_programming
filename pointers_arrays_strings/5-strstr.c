#include "main.h"
#include <stddef.h>

/**
 * _strstr - Find the first occurrence of a substring in a string
 *
 * @haystack: The string to search
 * @needle: The substring to find
 * Return: Pointer to start of substring in haystack, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
			{
				continue;
			} else
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
