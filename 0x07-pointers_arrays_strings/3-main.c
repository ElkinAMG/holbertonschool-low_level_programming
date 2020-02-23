#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "Elkin Mejia";
    char *f = "Elkin Majo";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
