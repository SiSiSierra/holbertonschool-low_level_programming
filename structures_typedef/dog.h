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
void print_dog(struct dog *d);
/**
 * struct dog_t - Another dog type
 * @name: Dog name
 * @age: Dog age
 * @owner: dog owner
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};

#endif
