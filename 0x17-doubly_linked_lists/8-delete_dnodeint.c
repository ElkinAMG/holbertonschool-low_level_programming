#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - Removes a node at given index.
 * @head: Head's linked list.
 * @index: Given index for delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *prev;
	dlistint_t *next;
	int prc = -1;

	if (head)
	{
		while (index > 0 && *head)
			index--, head = &(*head)->next;

		if (index > 0 || !(*head))
			return (prc);

		prev = (!(*head)->prev ? NULL : (*head)->prev);
		next = (!(*head)->next ? NULL : (*head)->next);
		free(*head);
		*head = !next ? NULL : next;
		if (*head)
			(*head)->prev = prev;
	}

	return (prc * -1);
}
