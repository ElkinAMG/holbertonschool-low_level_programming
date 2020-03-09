#include "dog.h"
/**
 * init_dog - Initializes a variable of type 'struct dog'
 * @d: Structure where came from.
 * @name: Dog's Name.
 * @age: Dog's Age.
 * @owner: Dog's Owner.
 *
 * Return: It doesn't return anything.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
