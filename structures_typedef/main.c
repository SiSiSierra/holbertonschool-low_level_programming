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
	dog_t *Gus;

	Gus = new_dog("Gus", 10, "Felicity");
	print_dog((struct dog *)Gus);
	free_dog(Gus);

	return (0);
}
