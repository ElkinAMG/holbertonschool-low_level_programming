#include "holberton.h"
/**
 * main - writes the character c to stdout
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i;

	char school[] = "Holberton\n";

	for (i = 0; i <= 13; i++)
		_putchar(school[i]);

	return (0);
}
