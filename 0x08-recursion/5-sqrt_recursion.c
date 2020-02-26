#include "holberton.h"
/**
 * sqrt_checker - checks if the number has sqrt.
 * @n: Number to check.
 * @v: Value for search the root.
 *
 * Return: if v is equals to n returns v, otherwise returns -1.
 */
int sqrt_checker(int n, int v)
{
	return ((v * v) == n ? v :
		((v * v) > n ? -1 :
		 sqrt_checker(n, v + 1)));
}
/**
 * _sqrt_recursion - returns the root of n.
 * @n: Number to find it sqrt.
 *
 * Return: returns sqrt of n, otherwise returns 0.
 */
int _sqrt_recursion(int n)
{
	return (n != 0 ? sqrt_checker(n, 1) : 0);
}
