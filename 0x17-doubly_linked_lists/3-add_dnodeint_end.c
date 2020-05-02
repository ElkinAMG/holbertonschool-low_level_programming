#include "lists.h"

/**
 * add_dnodeint_end - Appends a new node.
 * @head: Head's linked list.
 * @n: Data for new node.
 *
 * Return: It returns the address of the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *newNode = NULL;

	if (head)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (!newNode)
			return (NULL);

		newNode->n = n;
		newNode->next = NULL;

		for (; *head; head = &(*head)->next)
			newNode->prev = *head;

		*head = newNode;
	}

	return (newNode);
}
