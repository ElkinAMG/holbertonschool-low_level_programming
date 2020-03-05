#include "holberton.h"
/**
 * malloc_checked - It allocates memory using malloc.
 * @b: Input.
 *
 * Return: This function returns a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *number_m;

	number_m = malloc(b);

	if (number_m == NULL)
		exit(98);

	return (number_m);
}
