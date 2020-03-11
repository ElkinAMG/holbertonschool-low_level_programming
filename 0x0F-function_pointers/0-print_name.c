#include "function_pointers.h"
/**
 * print_name - It prints a name.
 * @name: It's name to print.
 * @f: Pointer to a function.
 *
 * Return: It does not return nothing.
 */
void print_name(char *name, f f)
{
	if (f != NULL)
		f(name);
}
