#include "lists.h"

/**
 * dlistint_len - Shows the number of elements.
 * @h: Head's linked list.
 *
 * Return: It returns the number of elements in a linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{

	size_t nodes = 0;

	if (h)
	{

		for (; h; h = h->next, nodes++)
			;

	}

	return (nodes);
}
