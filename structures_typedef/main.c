#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	struct dog Gus;

	init_dog(&Gus, NULL, 10, "Felicity");
	print_dog(&Gus);

	return (0);
}
