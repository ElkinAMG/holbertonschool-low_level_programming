#include "lists.h"

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

	dlistint_t *newNode = NULL;

	if (h)
	{
		while (*h && idx > 0)
			h = &(*h)->next, idx--;

		if (idx > 0 || !(*h))
			return (NULL);

		newNode = malloc(sizeof(dlistint_t));
		if (!newNode)
			return (NULL);

		newNode->n = n;
		newNode->next = *h;
		newNode->prev = (!(*h)->prev ? NULL : (*h)->prev);
		if ((*h)->prev)
			(*h)->prev->next = newNode;
		(*h)->prev = newNode;
		*h = newNode;
	}

	return (newNode);
}
