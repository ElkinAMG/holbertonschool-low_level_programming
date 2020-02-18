#include "holberton.h"
/**
 * print_rev - prints a string in reverse mode.
 * @s: string that will be printed.
 */
void print_rev(char *s)
{
	int _strlen(char *str), l;

	l = _strlen(s);

	for (l--; l >= 0; l--)
		_putchar(*(s + l));

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

	for ( ; *(str) != '\0'; str++)
		c++;

	return (c);
}
