#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Joins a string and substring together
 *
 * @s1: First string
 * @s2: Second string that may be trimmed
 * @n: Char limit of s2 to join
 * Return: Pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int s1len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{}
	s1len = i;
	for (i = 0; s2[i] != '\0' && i < n; i++)
	{}
	n = i;
	str = malloc(s1len + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[s1len + i] = s2[i];
	str[s1len + i] = '\0';
	return (str);
}
