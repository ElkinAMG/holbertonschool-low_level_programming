#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a specific node in the linked list.
 * @head: Head's linked list.
 * @index: Specific index to be obtained.
 *
 * Return: It returns the node obtained.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	while (index > 0 && head)
		head = head->next, index--;

	return (index > 0 ? NULL : head);
}
