#include <stdio.h>

/**
 * main - entry
 *
 * @argc: Number of commands
 * @argv: commands
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
