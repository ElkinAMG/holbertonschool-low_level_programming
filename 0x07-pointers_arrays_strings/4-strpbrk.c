#include "holberton.h"
/**
 * _strpbrk - Search the first occurence of any of the bytes in *accept.
 * @s: Travel this string.
 * @accept: bytes to read the occurence in s.
 *
 * Return: return the first occurence.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	for ( ; *s; s++)
		for (k = 0; *(accept + k) != '\0'; k++)
			if (*s == *(accept + k))
			{
				return (s);
			}

	return ('\0');
}
