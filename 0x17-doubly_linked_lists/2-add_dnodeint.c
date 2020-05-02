#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - Add a new node at the beginning of a list.
 * @head: Head's linked list.
 * @n: Given data for new node.
 *
 * Return: It returns the address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	if (*head)
		(*head)->prev = newNode;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;

	return (*head);
}
