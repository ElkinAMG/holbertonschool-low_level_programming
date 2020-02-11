#include "holberton.h"
/**
 * print_sign - print sign of the number c
 * @n: The integer to print
 *
 * Return: On success 1.
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
}
	else
	{
		_putchar('0');
		return (0);
}
}
