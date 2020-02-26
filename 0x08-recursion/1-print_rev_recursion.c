#include "holberton.h"
/**
 * _print_rev_recursion - Prints a string in reverse mode.
 * @s: String
 */
void _print_rev_recursion(char *s)
{
	*s ? _print_rev_recursion(s + 1), _putchar(*s) : 0;
}
