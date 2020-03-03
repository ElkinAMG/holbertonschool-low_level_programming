#include "holberton.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: String to copy.
 *
 * Return: A copy of the string given as a parameter.
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *newS;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;

	newS = (char *)malloc(sizeof(char) * (i + 1));

	if (newS == NULL)
		return (NULL);

	while (j <= i)
	{
		*(newS + j) = *(str + j);
		j++;
	}

	return (newS);
}
