#include "dog.h"
/**
 * scpy - Copy a string.
 * @src: Source.
 * @dest: Destination.
 *
 * Return: It returns the string..
 */
char *scpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - It creates a new dog :3
 * @name: Dog's Name.
 * @age: Dog's Age.
 * @owner: Dog's Owner.
 *
 * Return: It returns a pointer to structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp;

	temp = malloc(sizeof(dog_t));
	if (temp == NULL)
		return (NULL);

	temp->name = malloc(sizeof(name) + 1);
	if (temp->name == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->owner = malloc(sizeof(owner) + 1);
	if (temp->owner == NULL)
	{
		free(temp->name);
		free(temp);
		return (NULL);
	}

	temp->name = scpy(name, temp->name);
	temp->age = age;
	temp->owner = scpy(owner, temp->owner);

	return (temp);
}
