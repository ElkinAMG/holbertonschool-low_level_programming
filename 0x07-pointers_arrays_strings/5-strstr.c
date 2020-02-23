#include "holberton.h"
#include <stdio.h>
/**
 * comp - Travels in every content for x and y, then returns 1/0.
 * @c1: string 1.
 * @c2: string 2
 * Return: return 1 if comparing is true.
 */
int comp(char *c1, char *c2)
{
	while (*c1 && *c2)
	{
		if (*c1 != *c2)
			return (0);
		c1++;
		c2++;
	}
	return (*c2 == '\0');
}
/**
 * _strstr - takes two strings and find occurences of substring.
 * @haystack: string
 * @needle: substring
 * Return: This function returns a pointer points
 *         to the first character of the found s2 in s1.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k;
	i = 0, k = 0;

	for ( ; *(haystack + i) != '\0'; i++)
		if (comp(haystack + i, needle + k))
		{
			return (haystack + i);
			k++;
		}
	if (*(haystack + i) == *needle)
		return (haystack);

	return ('\0');
}
