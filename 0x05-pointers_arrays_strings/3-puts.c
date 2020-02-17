#include "holberton.h"
/**
 * _puts - prints a string followed by a new line.
 * @str: string to print.
 */
void _puts(char *str)
{
	int c;

	c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
