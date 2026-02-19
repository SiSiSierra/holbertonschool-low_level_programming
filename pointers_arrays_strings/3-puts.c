#include "main.h"

/**
 * _puts - Print a string of characters and newline
 *
 * @str: Pointer to string
 * Return: void
 */
void  _puts(char *str)
{

	while (1)
	{
		if (*str == '\0')
		{
			break;
		}
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
