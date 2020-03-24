#include "lists.h"

/**
 * get_nodeint_at_index - Look for the index given.
 * @head: Head of the linked list.
 * @index: Position given.
 *
 * Return: It returns a node, otherwise NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
		head = head->next, i++;

	return (i == index ? head : NULL);
}
