#include "holberton.h"
/**
 * _realloc - It reallocates a memory block.
 * @ptr: It's a pointer to the memory previously allocated.
 * @old_size: It's the size, in bytes, of the allocated space for ptr.
 * @new_size: It's the new size, in bytes of the new mem block.
 *
 * Return: Return the new pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt, *swp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
		return (pt);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pt = malloc(new_size);

	if (pt == NULL)
		return (NULL);

	swp = ptr;
	for (i = 0; i < old_size; i++)
		*(pt + i) = *(swp + i);

	free(ptr);

	return (pt);
}
