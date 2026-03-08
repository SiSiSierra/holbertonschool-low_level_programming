#include <stdio.h>
#include "dog.h"

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	struct dog Gus;

	init_dog(&Gus, "Gus", 10, "Felicity");
	printf("%s\n", Gus.name);

	return (0);
}
