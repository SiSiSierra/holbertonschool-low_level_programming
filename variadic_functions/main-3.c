#include "variadic_functions.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	const char * const test = "ceis";

	printf("%s\n%p\n", test, test);
	print_all(test, 'B', 3, "stSchool");
	return (0);
}
