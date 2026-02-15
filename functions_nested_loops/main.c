#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	printf("Output of Task 1 -----\n");
	print_alphabet();

	printf("Output of Task 2 -----\n");
	print_alphabet_x10();

	printf("Output of Task 3 -----\n");
	printf("%d", _islower(97));
	printf("%d", _islower(96));
	printf("%d", _islower(122));
	printf("%d\n", _islower(123));

	printf("Output of Task 4 ------\n");
	printf("%d", _isalpha(97));
	printf("%d", _isalpha(96));
	printf("%d", _isalpha(122));
	printf("%d", _isalpha(123));
	printf("%d", _isalpha(65));
	printf("%d", _isalpha(64));
	printf("%d", _isalpha(90));
	printf("%d", _isalpha(91));

	printf("Output of Task 5 -----\n");
	printf(", %d | ", print_sign(5));
	printf(", %d | ", print_sign(-9));
	printf(", %d | \n", print_sign(0));

	printf("Output of Task 6 -----\n");
	printf("%d\n", _abs(1));
	printf("%d\n", _abs(0));
	printf("%d\n", _abs(-1));

	printf("Output of Task 7 -----\n");
	n = print_last_digit(98);
	printf("%d\n", n + 48);

	printf("Output of Task 8 ------\n");
	jack_bauer();
	printf("\n");

	printf("Output of Task 9 -----\n");
	times_table();
	printf("\n");

	printf("Output of Task 10 -----\n");
	printf("%d", add(10, 999));
	printf("\n");

	return (0);
}
