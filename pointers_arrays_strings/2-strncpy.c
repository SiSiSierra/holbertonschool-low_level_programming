#include "main.h"

/**
 * _strncpy - Copy one part of a string over the start of another
 *
 * @dest: The first, original string
 * @src: The string to be copy
 * @n: Number of characters from src to copy
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + j) != '\0')
	{
		j++;
	}
	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (i = i; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	if (i > j)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
