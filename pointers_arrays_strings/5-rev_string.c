#include "main.h"

/**
 * rev_string - Reverse the contents of a string
 *
 * @s: Given string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char exch;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len--;
	while (len > i)
	{
		exch = *(s + len);
		*(s + len) = *(s + i);
		*(s + i) = exch;
		len--;
		i++;
	}
}
