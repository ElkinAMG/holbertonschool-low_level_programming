#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - Adds a node in a given index.
 * @h: Head's linked list.
 * @idx: Index for new node.
 * @n: Data for new node.
 *
 * Return: It returns the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *newNode = NULL, *prev;

	if (h)
	{
		while (*h && idx > 0)
			h = &(*h)->next, idx--;

		if (idx > 0 || !(*h))
			return (NULL);

		newNode = malloc(sizeof(dlistint_t));
		if (!newNode)
			return (NULL);

		prev = (!(*h)->prev ? NULL : (*h)->prev);

		newNode->n = n;
		newNode->next = *h;
		newNode->prev = prev;

		if (*h)
			(*h)->prev = newNode;

		if (prev)
			prev->next = newNode;
		else
			*h = newNode;
	}

	return (newNode);
}
