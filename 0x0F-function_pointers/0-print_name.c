#include "function_pointers.h"
/**
 * print_name - It prints a name.
 * @name: It's name to print.
 * @whatsmyname: Pointer to a function.
 *
 * Return: It returns nothing.
 */
void print_name(char *name, f whatsmyname)
{
	if (whatsmyname != NULL)
		whatsmyname(name);
}
