#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dog_t struct memory
 *
 * @d: Given dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
