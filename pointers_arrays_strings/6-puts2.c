#include "main.h"

/**
 * puts2 - Print a string's first and every other character, and newline
 *
 * @str: Pointer to string
 * Return: void
 */
void  puts2(char *str)
{
	int i = 0;

	while (1)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar(10);
}
