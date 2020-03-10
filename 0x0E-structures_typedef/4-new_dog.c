#include "dog.h"
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

	temp->name = malloc(sizeof(*name));
	if (temp->name == NULL)
	{
		free(temp->name);
		return (NULL);
	}
	temp->owner = malloc(sizeof(*owner));
	if (temp->owner == NULL)
	{
		free(temp->owner);
		return (NULL);
	}

	temp->name = name;
	temp->age = age;
	temp->owner = owner;

	return (temp);
}
