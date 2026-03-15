#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum every parameter
 *
 * @n: Repeating parameter to sum
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
