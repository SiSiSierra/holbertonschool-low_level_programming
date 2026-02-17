#include <stdio.h>

/**
 * main - Print 1 to 100, but products of 3 are Fizz and 5 are Buzz.
 *
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
