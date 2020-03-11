#include "function_pointers.h"
/**
 * int_index - Returns the index of the first element for which the cmp
 *             function does not return 0.
 * @array: Array to check with de cmp.
 * @size: It's the size of elements in the array.
 * @_cmp: Pointer to function cmp.
 *
 * Return: It returns the index of the element truth checked,
 * otherwise returns -1.
 */
int int_index(int *array, int size, cmp _cmp)
{
	int i;

	if (_cmp != NULL && array != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (!_cmp(*(array + i)))
				continue;
			else
				return (i);
	}
	return (-1);
}
