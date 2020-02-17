#include "holberton.h"
/**
 * print_rev - prints a string in reverse mode.
 * @s: string that will be printed.
 */
void print_rev(char *s)
{
	int _strlen(char *str);

	int l;

	l = _strlen(s);

	while (l >= 0)
	{
		_putchar(s[l]);
		l = l - 1;
	}

	_putchar('\n');
}
/**
 * _strlen - words.
 * @str: string that will be printed.
 * Return: length of a string
 */
int _strlen(char *str)
{
	int c;

	c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	return (c);
}
