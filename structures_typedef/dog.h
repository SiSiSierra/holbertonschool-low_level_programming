#ifndef DOG
#define DOG

/**
 * struct dog - Doggy data
 * @name: Doggy name
 * @age: Doggy age
 * @owner: Doggy owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
