#include "holberton.h"

/**
 * get_bit - Get a bit in a given position.
 * @n: Numbe.
 * @index: Position to get a bit.
 *
 * Return: Bit in a given position.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = -1;

	if (index > (sizeof(n) * 8))
		return (bit);

	for (; (int)index >= 0; index--, n >>= 1)
		bit = n & 1;

	return (bit);

	/*
	 * We can use 'return ((n >> index) & 1)' as well,
	 * both of them makes sense for me :).
	 */

}
