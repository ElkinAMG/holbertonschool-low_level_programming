#include <stdio.h>
/**
 * main - this is the main function
 * Return: 0 always
 */
int main(void)
{
char alphlower;
char alphupper;
for (alphlower = 'a'; alphlower <= 'z'; alphlower++)
{
putchar(alphlower);
}
for (alphupper = 'A'; alphupper <= 'Z'; alphupper++)
{
putchar(alphupper);
}
putchar('\n');
return (0);
}
