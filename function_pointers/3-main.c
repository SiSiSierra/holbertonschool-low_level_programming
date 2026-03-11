#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 1(ok), 98(argument overload), 99(invalid operator)
 */
int main(int argc, char *argv[])
{
	int (*opfunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	opfunc = get_op_func(argv[2]);
	if (opfunc == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", opfunc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
