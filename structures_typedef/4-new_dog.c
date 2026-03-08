#include "dog.h"
#include <stdlib.h>

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
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{}
	n = malloc(i);
	if (n == NULL)
		return (NULL);
	for (i = i; i >= 0; i--)
		n[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
	{}

	o = malloc(i);
	if (o == NULL)
	{
		free(n);
		return (NULL);
	}
	for (i = i; i >= 0; i--)
		o[i] = owner[i];

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
