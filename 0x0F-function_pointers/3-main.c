#include "3-calc.h"
/**
 * main - This is the main function for operators task.
 * @ac: Size of elements in av.
 * @av: Arguments given by compilation.
 *
 * Return: It returns the result of numbers.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%i\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
