#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - Print params of given data types
 *
 * @format: String of chars indicating data types of params
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	print_t funcs[] = {
		{"c", print_arg_chr},
		{"i", print_arg_int},
		{"f", print_arg_flo},
		{"s", print_arg_str},
	};

	printf("%s", format);
	va_start(args, format);
	while (format[i] != '\0')
	{
		j = 0;
		printf("i = %d", i);
		while (funcs[j].type[0] != format[i] && j < 4)
			j++;
		if (j == 4)
			continue;
		funcs[j].f(args);
		i++;
	}
	va_end(args);
	printf("\n");
}


/**
 * print_arg_chr - print the variable parameter char from list
 *
 * @list: va_list to pull from
 * Return: void
 */
void print_arg_chr(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_arg_int - Print the variable parameter int from list
 *
 * @list: va_list to pull from
 * Return: void
 */
void print_arg_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_arg_flo - Print the variable parameter float from list
 *
 * @list: va_list to pull from
 * Return: void
 */
void print_arg_flo(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_arg_str - Print the variable parameter string from list
 *
 * @list: va_list to pull from
 * Return: void
 */
void print_arg_str(va_list list)
{
	char *tmp;

	tmp = va_arg(list, char *);
	if (tmp == NULL)
		printf("(nil)");
	else
		printf("%s", tmp);
}
