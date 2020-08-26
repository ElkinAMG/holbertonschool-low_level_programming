#include "search_algos.h"

/**
 * s_index - Description of a function.
 * @array: A description of a parameter.
 * @value: A description of a parameter.
 * @position: A description of a parameter.
 * @size: A description of a parameter.
 *
 * Return: It returns an index.
 */

int s_index(int *array, int value, int pos, int size)
{
	if (*array && pos < size)
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		return (array[pos] == value ? pos :
			s_index(array, value, (pos + 1), size));
	}

	return (-1);
}

/**
 * linear_search - Description of a function.
 * @array: A description of a parameter.
 * @size: A description of a parameter.
 * @value: A description of a parameter.
 *
 * Return: It returns an index.
 */

int linear_search(int *array, size_t size, int value)
{
	return (array ? s_index(array, value, 0, size) : -1);
}
