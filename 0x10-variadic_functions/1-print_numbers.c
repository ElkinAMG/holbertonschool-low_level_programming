#include "variadic_functions.h"
/**
 * print_numbers - Pritns numbers separated by 'separator'
 * @separator: Numbers' Separator.
 * @counter: Last parameter before ellipsis.
 *
 * Return: It returns nothing.
 */
void print_numbers(const char *separator, n counter, ...)
{
	int i;
	va_list ap;

	va_start(ap, counter);

	/* Checks if separator is NULL: */
	if (separator == NULL)
		separator = "";

	/* Travels through each argument given: */
	for (i = 0; i < (int)counter; i++)
	{
		/* Prints the next argument */
		printf("%i", va_arg(ap, int));
		/* Checks if the argument+1 is distinct to the counter value: */
		printf("%s", ((i + 1) != (int)counter ? separator : ""));
	}

	/* Frees AP */
	va_end(ap);

	printf("\n");
}
