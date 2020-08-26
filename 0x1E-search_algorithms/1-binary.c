#include "search_algos.h"

/**
 * print_array - Description of a function.
 * @array: A description of a parameter.
 * @from: A description of a parameter.
 * @to: A description of a parameter.
 *
 * Return: Nothing.
 */

void print_array(int *array, int from, int to)
{
	if (from < to)
		printf("Searching in array: ");

	for (; from < to; from++)
		printf("%d%s", array[from], from + 1 == to ? "\n" : ", ");
}


/**
 * binary_search - Description of a function.
 * @array: A description of a parameter.
 * @size: A description of a parameter.
 * @value: A description of a parameter.
 *
 * Return: It returns an index, on failure -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (size - 1), index;

	if (array)
	{
		print_array(array, 0, size);

		while (left <= right)
		{
			index = ((left + right) / 2);

			if (array[index] < value)
			{
				left = index + 1;
				print_array(array, left, size);
		        }
			else if (array[index] > value)
			{
				right = index - 1;
				print_array(array, 0, right+1);
			}
			else
				return (index);
		}
	}

	return (-1);
}
