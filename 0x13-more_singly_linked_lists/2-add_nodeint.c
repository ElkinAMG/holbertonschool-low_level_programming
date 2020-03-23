#include "lists.h"

/**
 * add_nodeint - Add a New Node.
 * @head: Pointer to head's linked.
 * @n: New Data.
 *
 * Return: The address of the new node, otherwise returns NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;

	if (!head)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(head));

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
