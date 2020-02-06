#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: Always print 0
 */
int main(void)
{
int a = '0';
int b;
while (a <= '9')
{
b = a + 1;
while (b <= '9')
{
putchar(a);
putchar(b);
if (a == '8' && b == '9')
{
putchar('\n');
}
else
{
putchar(44);
putchar(32);
}
b++;
}
a++;
}
return (0);
}
