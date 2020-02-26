#include "holberton.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: Number to checks.
 *
 * Return: the factorial of a given number
 *         greater than 0, otherwise return 1.
 */
int factorial(int n)
{
	return (n < 0  ? -1 :
		(n > 0 ? (n * factorial(n - 1)) : 1));
}
