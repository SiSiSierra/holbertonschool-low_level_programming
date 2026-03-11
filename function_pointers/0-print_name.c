#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Defer printing a name to a pointed function
 *
 * @name: Given name
 * @f: Pointed function to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
