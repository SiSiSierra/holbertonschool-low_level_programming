#ifndef DOG
#define DOG

/**
 * struct dog - Doggy data
 * @name: Doggy name
 * @age: Doggy age
 * @owner: Doggy owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
