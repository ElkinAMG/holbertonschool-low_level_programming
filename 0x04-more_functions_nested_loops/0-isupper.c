#include "holberton.h"
/**
 * _isupper - Writes 1 if c is upper and 0 if it's lower
 * @c: The character to be evaluated
 *
 * Return: Return 1 if the value is upper, Return 0 if the value is lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
