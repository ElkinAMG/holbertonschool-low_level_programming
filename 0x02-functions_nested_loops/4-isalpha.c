#include "holberton.h"
/**
 * _isalpha - Displays alphanumeric
 * @c: The character to print
 *
 * Return: On success 0.
 */
int _isalpha(int c)
{
	int u;
	int l;

	for (u = 'a'; u <= 'z'; u++)
		for (l = 'A'; l <= 'Z'; l++)
			if (c == u || c == l)
				return (1);

	return (0);
}
