#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void __attribute__((constructor)) _msg(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
