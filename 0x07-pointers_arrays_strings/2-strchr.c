#include "holberton.h"
/**
 * _strchr - locates the 1st occurence of character c.
 * @s: String to travel.
 * @c: Character to locate.
 *
 * Return: The first occurence of a character
 */
char *_strchr(char *s, char c)
{

	for ( ; *s; s++)
		if (*s == c)
			return (s);

	return (*s == c ? s : 0);
}
