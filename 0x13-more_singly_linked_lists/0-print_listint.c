#include "lists.h"
#include <stdio.h>

/**
 * print_listint - It shows a linked lists with integers.
 * @h: Pointer to a structure.
 *
 * Return: It returns the number of nodes in linked lists.
 */

size_t print_listint(const listint_t *h)
{
	size_t nNodes = 0;

	for (; h; nNodes++, h = h->next)
		printf("%d\n", h->n);

	return (nNodes);
}
