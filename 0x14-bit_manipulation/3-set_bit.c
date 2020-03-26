#include "holberton.h"

/**
 * set_bit - Sets bit with OR bitwise.
 * @n: Number to change bits.
 * @index: Position to change bit.
 *
 * Return: 1 on success, otherwise -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > (sizeof(n) * 8))
		return (-1);

	*n |= (1 << index);

	return (1);
}
