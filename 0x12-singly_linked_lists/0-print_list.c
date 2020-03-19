#include "lists.h"

/**
 * print_list - Prints datas in linked lists.
 * @list: Head of linked list.
 *
 * Return: Number of nodes.
 */
size_t print_list(h node)
{
	int nNodes = 0;

	if (!node)
		return (0);

	while (node)
	{
		printf("[%i] %s\n", (node->str != NULL ? node->len : 0),
		              (node->str != NULL ? node->str : "(nil)"));
		node = node->next, nNodes++;
	}
	return (nNodes);
}
