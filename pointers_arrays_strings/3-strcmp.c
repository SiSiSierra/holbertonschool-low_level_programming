#include "main.h"

/**
 * _strcmp - Compare lexicographic value of 2 strings
 *
 * @s1: First string
 * @s2: Second string
 * Return: Lexicographic difference between given strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			break;
		}
	}
	return (*(s1 + i) - *(s2 + i));
}
