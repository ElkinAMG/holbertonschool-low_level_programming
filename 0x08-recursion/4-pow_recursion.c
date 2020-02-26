#include "holberton.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Base.
 * @y: Exponent.
 *
 * Return: X raised to Y.
 */
int _pow_recursion(int x, int y)
{
	return (y < 0 ? -1 :
		(y != 0 ? (x * _pow_recursion(x, y - 1)) : 1));
}
