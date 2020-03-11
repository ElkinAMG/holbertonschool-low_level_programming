#include "function_pointers.h"
/**
 * array_iterator - It executes a function in every member into an array.
 * @array: Array to use for execution.
 * @size: Size of the array.
 * @_action: Pointer to function to use.
 *
 * Return: It returns nothing.
 */
void array_iterator(int *array, size_t size, action _action)
{
	unsigned int i;

	if (_action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			(*_action)(*(array + i));
}
