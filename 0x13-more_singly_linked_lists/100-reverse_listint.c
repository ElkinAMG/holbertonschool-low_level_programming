#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - It reverses a listint.
 *@head: Head of the linked list.
 *
 * Return: It returns a reversed linked list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *nextNode;

	if (head == NULL)
		return (NULL);

	while ((*head) != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}

	*head = prevNode;

	return (*head);
}
