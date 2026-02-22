#include "main.h"

/**
 * _strcpy - Copy string from src to dest
 *
 * @dest: Pointer to copying location
 * @src: Pointer to location of string to be copied
 * Return: Pointer to copied data
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = *(src + i);
	return (dest);
}
