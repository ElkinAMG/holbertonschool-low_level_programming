#include "lists.h"

/**
 * free_dlistint - Frees memory space occuped for lists.
 * @head: Head's linked list.
 *
 * Return: It returns nothing.
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *mirror = head;

	while (head)
	{

		head = head->next;
		free(mirror);
		mirror = head;

	}

}
