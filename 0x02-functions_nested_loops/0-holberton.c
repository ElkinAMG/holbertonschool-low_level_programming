#include "holberton.h"
/**
 * main - writes the character c to stdout
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i;

	char school[11] = "Holberton";

	for (i = 0; i <= 11; i++)

		_putchar(school[i]);

	_putchar('\n');
	return (0);
}
