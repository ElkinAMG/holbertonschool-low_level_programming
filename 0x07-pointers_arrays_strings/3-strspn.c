#include "holberton.h"
/**
 * _strspn - calculates the length of the initial segment
 * of str1 which consists entirely of characters in str2.
 * @s: The main string to be scanned.
 * @accept: The list of characters to match in s.
 *
 * Return: return the length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, k, next;

	next = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
			if (*(s + i)  == *(accept + k))
			{
				next++;
				break;
			}
		if (*(s + i) != *(accept + k))
			break;
	}
	return (next);
}
