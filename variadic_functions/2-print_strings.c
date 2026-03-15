#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Print each string param
 *
 * @separator: String between int output
 * @n: Number of passed ints
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *tmp;

		tmp = va_arg(args, char *);
		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);
		if (i + 1 == n)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
