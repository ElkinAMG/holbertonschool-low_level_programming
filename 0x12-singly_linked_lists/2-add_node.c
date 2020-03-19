#include <string.h>
#include "lists.h"

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
 * add_node - Add a node at the beginning of the LL.
 * @h: Header of the LL.
 * @s: String to add at the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(head h, str s)
{
	/* Declare the new node like NULL:  */
	list_t *newNode = NULL;

	/* Verify: */
	if (!h || !s)
		return (NULL);

	/* Define the size of new node:  */
	newNode = malloc(sizeof(list_t));
	/* If it fails: */
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	/* Define value of new node -> str:  */
	newNode->str = strdup(s);
	/* Define lenght of characters: */
	newNode->len = length(s);
	/* Define address to next node: */
	newNode->next = (*h);
	/* Redefine the new head for LL: */
	(*h) = newNode;

	return (newNode);
}
