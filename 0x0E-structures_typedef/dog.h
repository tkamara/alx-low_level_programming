#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - different information about dogs
 * @name: name of dogs
 * @age: age of dogs
 * @owner: dog owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
