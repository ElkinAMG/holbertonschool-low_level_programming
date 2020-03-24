#include "lists.h"

/**
 * sum_listint - Sum of each data (n).
 * @head: Head of the linked list.
 *
 * Return: Addition.
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}
