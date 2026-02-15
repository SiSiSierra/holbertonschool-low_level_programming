#include "main.h"

/**
 * jack_bauer - Prints every minute in 24 hour time
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;

	do {
		_putchar(h1 + 48);
		_putchar(h2 + 48);
		_putchar(58);
		_putchar(m1 + 48);
		_putchar(m2 + 48);
		if (m2 == 9)
		{
			if (m1 == 5)
			{
				if (h2 == 9)
				{
					h1++;
					h2 = 0;
				} else
				{
					h2++;
				}
				m1 = 0;
			} else
			{
				m1++;
			}
			m2 = 0;
		} else
		{
			m2++;
		}
		_putchar(10);
		if (h1 == 2 && h2 == 4)
		{
			break;
		}

	} while (1);
}
