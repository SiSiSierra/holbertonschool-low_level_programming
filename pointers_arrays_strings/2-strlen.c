#include "main.h"

/**
 * _strlen - Determine the length of a string
 *
 * @s: Pointer to chars of string
 * Return: void
 */
int _strlen(char *s)
{
	int len = 0;

	while (1)
	{
		if (*(s + len) == '\0')
		{
			break;
		}
		len++;
	}

	return (len);
}
