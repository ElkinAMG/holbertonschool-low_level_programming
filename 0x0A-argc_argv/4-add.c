#include "holberton.h"
/**
 * main - Prints the sum of two numbers.
 * @argc: Number of parameters.
 * @argv: Parameters.
 *
 * Return: returns the sum of two numbers.
 */
int main(int argc, char *argv[])
{
	int total, i;
	unsigned int j;

	total = 0;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					total += atoi(argv[i]);
					break;
				}
			}
		}

	printf("%i\n", total);

	return (0);
}
