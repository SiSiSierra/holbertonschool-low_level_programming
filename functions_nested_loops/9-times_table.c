#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int k;

			k = i * j;
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			if (k < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(k + 48);
				continue;
			}
			_putchar(44);
			_putchar(32);
			_putchar(k / 10 + 48);
			_putchar(k % 10 + 48);
		}
		_putchar(10);
	}
}
