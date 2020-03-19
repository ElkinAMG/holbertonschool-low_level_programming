#include "lists.h"

/**
 * list_len - Returns the number of elements inside LL.
 * @head: It's the header of a linked list.
 *
 * Return: Number of elements inside LL.
 */

size_t list_len(h head)
{
	int nElements = 0;

	while (head)
		head = head->next, nElements++;

	return (nElements);
}
