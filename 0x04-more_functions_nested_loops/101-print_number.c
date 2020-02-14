#include "holberton.h"
/**
 * print_number - prins numbers
 * @n: number value
 */
void print_number(int n)
{
	if (n <= 0)
	{
		if (n != 0)
		{
		_putchar('-');
		n = (n * (-1));
		}
		else
		{
		_putchar('0');
		}
	}
	if (n > 999)
	{
		_putchar((n / 100) / 10 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
	else if (n > 99)
	{
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 100) / 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
