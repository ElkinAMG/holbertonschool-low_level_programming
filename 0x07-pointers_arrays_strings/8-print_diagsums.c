#include "holberton.h"
/**
 * print_diagsums - Prints diagonal sums of a matrix [IxI]
 * @a: Pointer to the matrix [row][columns]
 * @size: Size of one the string one dimension.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += *(a + ((size + 1) * i));

	for (i = 1; i < size + 1; i++)
		sum2 += *(a + ((size - 1) * i));

	printf("%i, %i\n", sum1, sum2);
}
