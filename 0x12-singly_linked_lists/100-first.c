#include <stdio.h>

/**
 * _msg - check the code for Holberton School students.
 *
 * Return: Nothing.
 */
void __attribute__((constructor)) _msg(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
