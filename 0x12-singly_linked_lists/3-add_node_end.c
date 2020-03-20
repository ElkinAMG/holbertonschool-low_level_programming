#include "lists.h"
#include <string.h>

/**
 * length - Calculates the lenght in a string.
 * @s: String to counts.
 *
 * Return: Lenght.
 */

size_t length(str s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}

/**
 * add_node_end - Add new node at the end of a linked list.
 * @h: Reference to the header of a LL.
 * @s: String.
 *
 * Return: Node Address.
 */
list_t *add_node_end(head h, str s)
{
	/* Declare a new node: */
	list_t *newNode;

	/* Declare the last node replacement: */
	list_t *lastNode = *h;

	/* Verify: */
	if (!s)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	/* Verify: */
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	/* Declare string: */
	newNode->str = strdup(s);
	/* Declare length: */
	newNode->len = length(s);
	/* Declare next's address as NULL: */
	newNode->next = NULL;

	/* Verify if reference is NULL at 1st time: */
	if (!(*h))
	{
		*h = newNode;
		return (NULL);
	}

	/* Veify while be different to null: */
	while (lastNode->next)
		lastNode = lastNode->next; /* Traverse until the NULL */

	/* Assing last node as new node: */
	lastNode->next = newNode;

	/* Return address: */
	return (newNode);
}
