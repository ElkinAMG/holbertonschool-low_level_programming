#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a base 2 number to base 10 number.
 * @b: Pointer with base 2 number.
 *
 * Return: Number in base 10.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, exp = 0;
	unsigned int sum = 0;

	for (; *(b + exp); exp++)
		if (*(b + exp) != 48 && *(b + exp) != 49)
			return (0);

	for (exp--; exp >= 0; exp--, i++)
		sum += ((*(b + i) - 48) << exp);

	return (sum);
}
