#include "function_pointers.h"
/**
 * print_name - It prints a name.
 * @name: It's name to print.
 * @whats_my_name: Pointer to a function.
 *
 * Return: It does not return nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
