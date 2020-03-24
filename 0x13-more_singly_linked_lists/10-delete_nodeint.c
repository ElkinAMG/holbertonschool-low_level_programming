#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a given position.
 * @head: Head of the linked list.
 * @index: Position to be deleted.
 *
 * Return: It returns 1 if successful, otherwise -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *linker;

	if (*head)
	{
		if (index == 0)
		{
			linker = (*head)->next;
			free((*head));
			*head = linker;
			return (1);
		}

		while (*head && (i < (index - 1)))
			i++, head = &(*head)->next;

		if (i != (index - 1))
			return (-1);

		linker = (*head)->next->next;
		free((*head)->next);
		(*head)->next = linker;
		return (1);
	}

	return (-1);
}
