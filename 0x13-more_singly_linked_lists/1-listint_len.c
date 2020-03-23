#include "lists.h"

/**
 * listint_len - Look for the length of Linked Lists.
 * @h: Head's Linked Lists.
 *
 * Return: Length of Linked Lists.
 */

size_t listint_len(const listint_t *h)
{
	int nNodes = 0;

	for (; h; nNodes++, h = h->next)
		;

	return (nNodes);
}
