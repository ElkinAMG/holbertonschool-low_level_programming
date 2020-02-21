#include "holberton.h"
/**
 * print_number - prins numbers
 * @n: number value
 */
void print_number(int n)
{
	int tl;

	tl = 0;

	if (n == 0)
		_putchar(0 + '0');

	if (n < 0)
	{
		_putchar ('-');
		n *= -1;
	}

	while (n != 0)
	{
		tl = (tl * 10 + (n % 10));
		n /= 10;
	}

	n = tl;

	while (n != 0)
	{
		tl = (tl * 10 + (n % 10));
		_putchar(tl % 10 + '0');
		n /= 10;
	}


}
