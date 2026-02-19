#include "main.h"

/**
 * print_rev - Print a string of characters in reverse and newline
 *
 * @s: Pointer to string
 * Return: void
 */
void  print_rev(char *s)
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
	len--;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar(10);
}
