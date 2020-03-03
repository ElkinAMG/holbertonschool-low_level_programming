#include "holberton.h"
/**
 * str_concat - This function concatenates two strings.
 * @s1: First String.
 * @s2: Second String.
 *
 * Return: Two concatenaded strings, return NULL is failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *concat = NULL;

	(s1 == NULL ? s1 = "" : 0);
	(s2 == NULL ? s2 = "" : 0);

	i = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
		i++;

	concat = (char *)malloc(sizeof(char) * i);

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(concat + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++, i++)
		*(concat + i) = *(s2 + j);

	return (concat);
}
