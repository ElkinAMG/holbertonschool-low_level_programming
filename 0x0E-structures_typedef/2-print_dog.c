#include "dog.h"
#include <stdio.h>
#define mNULL "(nil)"
/**
 * print_dog - It prints a dog's structure.
 * @d: Structure where dog came from.
 *
 * Return: It always returns 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL ? d->name : mNULL));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL ? d->owner : mNULL));
}
