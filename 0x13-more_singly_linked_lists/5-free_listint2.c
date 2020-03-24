#include "lists.h"

/**
 * free_listint2 - Frees a linked list a stablish head to NULL.
 * @head: Head of the linked list.
 *
 * Return: It returns nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (*head)
		tmp = (*head)->next, free(*head), *head = tmp;

	head = NULL;
}
