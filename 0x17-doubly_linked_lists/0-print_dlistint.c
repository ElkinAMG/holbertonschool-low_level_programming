#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Print a double linked list.
 * @h: Head's linked list.
 *
 * Return: It returns the number of nodes printed.
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t nodes = 0;

	if (h)
	{

		for (; h; h = h->next, nodes++)
			printf("%i\n", h->n);

	}


	return (nodes);
}
