#include "holberton.h"

/**
 * print_binary - Prints a binary number.
 * @n: Number to translate.
 *
 * Return: Binary number.
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int k = n;

	for (; k != 0; i++, k >>= 1)
		;

	i = (i > 0 ? i - 1 : 0);

	for (k = 0; i >= 0; i--)
	{
		k = n >> i;

		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
