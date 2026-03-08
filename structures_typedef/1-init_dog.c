#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialise a dog struct
 *
 * @d: Pointer to struct
 * @name: Assign to dog.name
 * @age: Assign to dog.age
 * @owner: Assign to dog.owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
