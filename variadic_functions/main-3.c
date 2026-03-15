#include "variadic_functions.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	const char * const format = "mnbvfqcepolsbxzi";

	printf("%p\n", format);
	print_all("mnbvfqcepolsbxzi", 3.14435, 'H', "#Cisfun", 0);
	return (0);
}
