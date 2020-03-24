#include "lists.h"

/**
 * free_listint - Freeing A Linked List.
 * @head: Head of Linked List.
 *
 * Return: It returns nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
		tmp = head, head = head->next, free(tmp);
}
