#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Print params of given data types
 *
 * @format: String of chars indicating data types of params
 * Return: void
 */
void print_all(const char * const format, ...)
{
	p_t prints[4] = {
		{"c", print_arg_chr},
		{"i", print_arg_int},
		{"f", print_arg_flo},
		{"s", print_arg_str},
	};
	int i = 0;
	int j = 0;
	char *sep = "";
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (prints[j].type[0] != format[i] && j < 4)
			j++;
		i++;
		if (j == 4)
			continue;
		printf("%s", sep);
		sep = ", ";
		prints[j].f(args);
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
	char *out = "nil";

	tmp = va_arg(list, char *);
	if (tmp != NULL)
		out = tmp;
	printf("%s", out);
}
