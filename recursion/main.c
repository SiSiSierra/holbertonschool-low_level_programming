#include "main.h"
#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	char *s = "Hello World!";
	
	_puts_recursion(s);
	_print_rev_recursion(s);
	printf("\n%d\n", _strlen_recursion(s));
	printf("%d\n", factorial(3));
	printf("%d\n", _pow_recursion(5, 3));
	printf("%d\n", _sqrt_recursion(26));
	printf("%d\n", is_prime_number(12));

	return (0);
}
