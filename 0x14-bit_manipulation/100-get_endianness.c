#include "holberton.h"

/**
 * get_endianness - Check endianness.
 *
 * Return: 1 on Big Endian, 0 on Little Endian.
 */

int get_endianness(void)
{
	unsigned int test = 1;

	char *endian = (char *)(&test);

	return ((int)*endian);
}
