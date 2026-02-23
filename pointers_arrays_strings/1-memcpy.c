#include "main.h"

/**
 * _memcpy - Copy up to index n of src buffer to dest buffer
 *
 * @dest: Buffer to copy to
 * @src: Buffer to copy from
 * @n: Depth of buffer to fill and copy
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
