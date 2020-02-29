#include "holberton.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: Size of the argv array.
 * @argv: An array of size argc.
 *
 * Return: returns the program name.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
