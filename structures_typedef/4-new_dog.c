#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Create a dog struct using dog_t type
 *
 * @name: Assigned to name
 * @age: Assigned to age
 * @owner: Assigned to owner
 * Return: Pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n;
	char *o;

	if (name == NULL || owner == NULL)
		return (NULL);
	n = malloc(strlen(name) + 1);
	if (n == NULL)
		return (NULL);

	strcpy(n, name);

	o = malloc(strlen(owner) + 1);
	if (o == NULL)
	{
		free(n);
		return (NULL);
	}
	strcpy(o, owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(o);
		free(n);
		return (NULL);
	}
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
