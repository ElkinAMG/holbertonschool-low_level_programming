#include "lists.h"

/**
 * free_list - Free all data memory allocated.
 * @head: Linked List.
 *
 * Return: It returns anything.
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head), free(head->str);
		head = head->next;
	}
}
