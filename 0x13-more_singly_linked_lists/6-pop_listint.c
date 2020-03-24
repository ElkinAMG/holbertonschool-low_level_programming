#include "lists.h"

/**
 * pop_listint - Deletes The Head Node.
 * @head: Head of the Linked List.
 *
 * Return: Data of the popped node.
 */

int pop_listint(listint_t **head)
{
	listint_t *newHead;
	int value = 0;

	if (head && *head)
	{
		value = (*head)->n;
		newHead = *head;
		*head = newHead->next;
		free(newHead);
	}

	return (value);
}
