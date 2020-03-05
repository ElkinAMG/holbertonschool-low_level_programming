#include "holberton.h"
/**
 * _calloc - It allocates memory for an array, using malloc.
 * @nmemb: Array with elements.
 * @size: Size of array with elements.
 *
 * Return: It returns  a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(ar + i) = 0;

	return (ar);
}
