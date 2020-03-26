#include "holberton.h"

/**
 * clear_bit - Cleans a bit at a given index.
 * @n: Number to clear bits.
 * @index: Position to delete bit.
 *
 * Return: 1 on success, otherwise -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
