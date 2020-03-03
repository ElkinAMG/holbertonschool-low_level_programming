#include "holberton.h"
/**
 * create_array - Creates an array of chars.
 * @size: Size needed in the array.
 * @c: Initialize array with it.
 *
 * Return: NULL if size is 0, Returns a pointer to the array
 *         or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	i = 0;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		*(s + i) = c;
		i++;
	}

	return (s);
}
