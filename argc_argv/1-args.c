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
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
