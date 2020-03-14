#include "variadic_functions.h"
/**
 * sum_them_all - It sum every parameter given.
 * @counter: Last parameter before ellipsis in the function.
 *
 * Return: It returns the sum of every parameter give it to function.
 */
int sum_them_all(n counter, ...)
{
	int i, sum;
	va_list ap;

	i = sum = 0;

	if (counter != 0)
	{
		va_start(ap, counter);

		/* Travels and adds each parameter. */
		for ( ; i < (int)counter; i++)
			sum += va_arg(ap, int);

		/* Free list AP */
		va_end(ap);

	}

	return (sum);
}
