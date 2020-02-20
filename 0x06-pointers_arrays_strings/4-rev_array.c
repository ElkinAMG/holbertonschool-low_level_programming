#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of 'integers'.
 * @a: Array.
 * @n: Elements of the array.
 */
void reverse_array(int *a, int n)
{
	int aux, i;

	for (i = 0; i < n / 2; i++)
	{
		aux = *(a + i); /*Save the index*/
		*(a + i) = *(a + n - i - 1); /*Swap the ultimate - i with index + i*/
		*(a + n - i - 1) = aux; /*Swap the first position with the ultimate*/
	}
}
