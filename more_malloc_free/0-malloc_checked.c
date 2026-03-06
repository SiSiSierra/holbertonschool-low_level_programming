#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate a chunk of memory
 *
 * @b: Byte size of memory
 * Return: Pointer to new memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
