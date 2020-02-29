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
	int number[2], int i;

	if (argc > 2)
		for (i = 0; i < argc - 1; i++)
			number[i] = atoi(argv[i + 1]);
	else
	{
		printf("ERROR\n");
		return (1);
	}

	printf("%i\n", number[0] * number[1]);

	return (0);
}
