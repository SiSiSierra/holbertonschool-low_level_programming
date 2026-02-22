#include "main.h"

/**
 * _atoi - Convert a string to an int matching the first number in the string
 *
 * @s: Given string
 * Return: The found int
 */
int _atoi(char *s)
{
	int i;
	int rtrn = 0;
	int sign = 1;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* Check if character doesn't represent a number */
		if (*(s + i) < 48 || *(s + i) > 57)
		{
			/* Terminate loop if number was calculated */
			if (rtrn != 0)
			{
				break;
			}
			continue;
		}
		/* Get the index of a possible negative sign */
		if (rtrn == 0 && i > 0 && *(s + i - 1) == 45)
		{
			sign = -1;
		}
		rtrn *= 10;
		rtrn += *(s + i) - 48;
	}
	rtrn *= sign;
	return (rtrn);
}
