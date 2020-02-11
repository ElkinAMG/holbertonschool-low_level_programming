#include "holberton.h"
/**
 * print_last_digit - writes the last digit
 * @y: The character to print
 *
 * Return: return last digit.
 */
int print_last_digit(int y)
{
	int ld = (y % 10);
	int num;

	if (ld < 0)
	{
		ld = ((-1) * ld);
	}
	num = ('0' + ld);
	_putchar(num);
	return (ld);
}
