#include "lists.h"

/**
 * add_nodeint_end - Add A New Node At The End.
 * @head: The head of the linked list.
 * @n: The data to store in the new node.
 *
 * Return: The address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	if (!head)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	while (*head)
		head = &(*head)->next;

	*head = newNode;

	return (newNode);
}
