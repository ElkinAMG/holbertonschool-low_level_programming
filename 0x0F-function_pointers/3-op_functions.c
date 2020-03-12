#include "3-calc.h"
/**
 * op_add - Addition.
 * @a: First Integer.
 * @b: Second Integer.
 *
 * Return: It returns the sum of A and B.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Substraction.
 * @a: First Integer.
 * @b: Second Integer.
 *
 * Return: It returns the difference of A and B.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplication.
 * @a: First Integer.
 * @b: Second Integer.
 *
 * Return: It returns the product of A and B.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division.
 * @a: First Integer.
 * @b: Second Integer.
 *
 * Return: It returns the division of A by B.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Modulo.
 * @a: First Integer.
 * @b: Second Integer.
 *
 * Return: It returns the remainder division of A by B.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
