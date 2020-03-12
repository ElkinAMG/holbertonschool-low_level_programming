#include "3-calc.h"
/**
 * main - This is the main function for operators task.
 * @ac: Size of elements in av.
 * @av: Arguments given by compilation.
 *
 * Return: It returns the result of numbers.
 */
int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(av[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%i\n", get_op_func(av[2])(atoi(av[1]), atoi(av[3])));

	return (0);
}
