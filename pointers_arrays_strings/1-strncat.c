#include "main.h"

/**
 * _strncat - Append one part of a string to the other
 *
 * @dest: The first, original string
 * @src: The string to be appended
 * @n: Number of characters from src to copy
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < n && *(src + j) != '\0'; j++)
	{
		*(dest + i + j) = *(src + j);
	}
	*(dest + i + j) = '\0';
	return (dest);
}
