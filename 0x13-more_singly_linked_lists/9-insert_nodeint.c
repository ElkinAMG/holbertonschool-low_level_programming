#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node into linked list.
 * @head: Head of the linked list.
 * @idx: Index to insert it.
 * @n: Data (n) value to add.
 *
 * Return: The address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previousNode;
	listint_t *newNode;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	while ((i < idx) && *head)
		i++, head = &(*head)->next;

	if (i != idx)
		return (NULL);

	newNode->n = n;
	previousNode = *head;
	newNode->next = previousNode;
	*head = newNode;

	return (newNode);
}
