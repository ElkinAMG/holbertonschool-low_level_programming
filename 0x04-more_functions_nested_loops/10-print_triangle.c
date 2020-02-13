#include "holberton.h"
/**
 * print_triangle - prints triangles
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (y = 0; y < ((size - i) - 1); y++)
			{
				_putchar(' ');
			}
			for (x = 0; x <= i; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
