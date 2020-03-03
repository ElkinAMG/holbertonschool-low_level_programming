#include "holberton.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: String to copy.
 *
 * Return: A copy of the string given as a parameter.
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *newS;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;

	newS = malloc(sizeof(char *) * (i + 1));

	if (newS == NULL)
	{
		free (newS);
		return (NULL);
	}

	i = 0;

	while (*(str + i) != '\0')
	{
		*(newS + i) = *(str + i);
		i++;
	}

	return (newS);
}
