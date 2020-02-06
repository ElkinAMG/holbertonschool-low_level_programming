#include <stdio.h>
/**
 * main - this is main function
 * Return: 0
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 9)
{
putchar(44); /*comma ascii code*/
putchar(32); /*space ascii code*/
}
}
putchar('\n');
return (0);
}
