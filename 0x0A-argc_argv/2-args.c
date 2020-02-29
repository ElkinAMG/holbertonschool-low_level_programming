#include "holberton.h"
/**
 * main - Prints all arguments it receives.
 * @argc: Quantity of arguments in cl.
 * @argv: Arguments with size argc.
 *
 * Return: returns arguments.
 */
int main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
		printf("%s\n", *(argv + i));

		return (0);
}
