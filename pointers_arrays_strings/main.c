#include <stdio.h>
#include "main.h"

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int n = 402;
	int a = 5;
	int b = 36;
	char *str = "Len";
	char s[8] = "01234567";

	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);

	printf("%d - %d\n", a, b);
	swap_int(&a, &b);
	printf("%d - %d\n", a, b);

	printf("%d\n", _strlen(str));

	_puts(str);

	print_rev(str);

	rev_string(s);
	printf("%s\n", s);

	puts2(s);

	puts_half(s);

	return (0);
}
