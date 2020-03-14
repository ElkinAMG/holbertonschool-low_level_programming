#include "variadic_functions.h"
/**
 * print_all - It prints anything.
 * @toprint: It is a list of types of arguments passed to the function.
 *
 * Return: It returns anything.
 */
void print_all(format toprint, ...)
{
	int i, j;
	va_list op;
	/* Variable with the separator: */
	char *sprt = "";
	/* Array of structures with functions: */
	callF prints[4] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
	};

	j = i = 0;
	/* Initialize object op like variadic function: */
	va_start(op, toprint);
	/* Travels through format entered: */
	while (toprint && (*(toprint + i)))
	{
		/* Travels through array of funtions: */
		while (j < 4)
		{
			/* Checks the match b/w current character & identificators: */
			if (*(toprint + i) == prints[j].dType)
			{
				/* Starts with the separator as void string: */
				printf("%s", sprt);
				/* Calls to the function in position j: */
				(prints[j].func)(op);
				/* Declares separator for the next travel: */
				sprt = ", ";
				break;
			}
			j++;
		}
		j = 0, i++;
	}
	printf("\n"), va_end(op);
}

/* Print Functions */

/**
 * print_c - Prints characters.
 * @c: Characters.
 */
void print_c(va_list c)
{
	char z;

	z = va_arg(c, int);

	printf("%c", z);
}
/**
 * print_i - Prints integers.
 * @i: Integers.
 */
void print_i(va_list i)
{
	printf("%i", va_arg(i, int));
}
/**
 * print_f - Prints floats.
 * @f: Floats.
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_s - Prints strings.
 * @s: Strings.
 */
void print_s(va_list s)
{
	char *txt;

	txt = va_arg(s, char *);

	if (!(txt) || !(*txt))
	{
		printf("%s", "(nil)");
		return;
	}

	printf("%s", txt);

}

/* End */
