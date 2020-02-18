#include "holberton.h"
/**
 * puts_half - prints the half in a string.
 * @str: Variable string.
 */
void puts_half(char *str)
{
	int _strlen(char *s), len, i;

	len = _strlen(str);

	if ((len % 2) == 0)
		i = (len / 2);
	else
		i = ((len - 1) / 2);

	for ( ; i < len; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
/**
 * _strlen - find the length of a string
 * @s: input string pointer
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s++) != '\0')
		i++;

	return (i);
}
