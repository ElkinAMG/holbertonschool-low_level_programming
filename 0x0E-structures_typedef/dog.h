#ifndef DOG_HEADER
#define DOG_HEADER

#include <stdlib.h>

/**
 * struct Dog - This structure makes reference to a dog.
 * @name: Dog's Name.
 * @age: Dog's Age.
 * @owner: Dog's Owner.
 *
 * It is a structure where storage info about dogs.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_HEADER */
