#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Sum two ints
 *
 * @a: Int 1
 * @b: Int 2
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two ints
 *
 * @a: Int 1
 * @b: Int 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two ints
 *
 * @a: Int 1
 * @b: Int 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two ints
 *
 * @a: Int 1
 * @b: Int 2
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Get remainder of dividing two ints
 *
 * @a: Int 1
 * @b: Int 2
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
