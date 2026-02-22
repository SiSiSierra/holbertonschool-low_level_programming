#include "main.h"

/**
 * _strcat - Append one string to the other
 *
 * @dest: The first, original string
 * @src: The string to be appended
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i + j) = *(src + j);
	}
	*(dest + i + j) = '\0';
	return (dest);
}
