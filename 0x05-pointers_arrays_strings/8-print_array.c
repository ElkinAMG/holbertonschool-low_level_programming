#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints elements inside arrays.
 * @a: arrays.
 * @n: elements inside arrays.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		(i + 1) == n ? printf("%i", *(a + i)) : printf("%i, ", *(a + i));

	printf("\n");
}
