#ifndef MAIN
#define MAIN
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_arg_chr(va_list);
void print_arg_int(va_list);
void print_arg_flo(va_list);
void print_arg_str(va_list);

/**
 * struct print_type - Char and associated print fucntion
 *
 * @type: Type as char
 * @f: Function
 */
typedef struct print_type
{
	char *type;
	void (*f)(va_list);
} print_t;


#endif
