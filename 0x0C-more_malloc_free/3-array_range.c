#include "holberton.h"
/**
 * array_range - Creates an array of integers.
 * @min: Minimum value from the array.
 * @max: Maximum value from the array.
 *
 * Return: It returns an array with values ordered from min to max.
 */
int *array_range(int min, int max)
{
	int i, limit;
	int *ptr;

	if (min > max)
		return (NULL);

	limit = ((max - min) + 1);

	ptr = malloc(sizeof(int) * limit);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < limit; i++)
		*(ptr + i) = min + i;

	return (ptr);
}
