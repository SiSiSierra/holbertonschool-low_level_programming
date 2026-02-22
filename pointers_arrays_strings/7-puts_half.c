#include "main.h"


/**
 * puts_half - print the latter half of a string, half of length rounded up
 *
 * @str: The given string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	_putchar(len + 48);
	len -= len / 2 + 1;
	_putchar(len + 48);
	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar(10);
}
