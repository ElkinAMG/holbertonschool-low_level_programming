#include "holberton.h"
/**
 * main - prints the mult. of two numbers.
 * @argc: Number of parameters in commands line.
 * @argv: Parameters.
 *
 * Return: retuens the mult.
 */
int main(int argc, char **argv)
{
	int mult, i;

	mult = 1;

	if (argc > 2)
		for (i = 0; i < argc - 1; i++)
			mult *= atoi(argv[i + 1]);
	else
	{
		printf("ERROR\n");
		return (1);
	}

	printf("%i\n", mult);

	return (0);
}
