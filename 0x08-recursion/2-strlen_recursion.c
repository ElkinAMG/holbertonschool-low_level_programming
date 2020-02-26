#include "holberton.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String.
 *
 * Return: Length of a string.
 */
int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(s + 1)) : 0);
}
