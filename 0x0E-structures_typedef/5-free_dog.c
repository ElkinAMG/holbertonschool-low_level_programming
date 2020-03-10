#include "dog.h"
/**
 * free_dog - It frees the dog.
 * @d: Pointer to struct.
 *
 * Return: It does not return.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
