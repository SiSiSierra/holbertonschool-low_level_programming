#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Print each int param
 *
 * @separator: String between int output
 * @n: Number of passed ints
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i + 1 == n)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
