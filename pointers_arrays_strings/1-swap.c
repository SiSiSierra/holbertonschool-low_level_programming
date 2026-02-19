#include "main.h"

/**
 * swap_int- Exchange the values pointed by a and b
 *
 * @a: First pointer
 * @b: Second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
