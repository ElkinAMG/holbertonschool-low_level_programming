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
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	ptr = malloc(new_size * sizeof(ptr));

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
