#include "lists.h"

/**
 * sum_dlistint - Sums eachs n element in linked list.
 * @head: Head's linked list.
 *
 * Return: It returns the sum.
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}
