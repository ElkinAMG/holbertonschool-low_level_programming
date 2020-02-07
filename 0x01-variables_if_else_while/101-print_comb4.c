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
int c;
while(a <= '9')
{
b = a + 1;
while(b <= '9')
{
c = b + 1;
while(c <= '9')
{
putchar(a);
putchar(b);
putchar(c);
if(a == '7' && b == '8' && c == '9')
{
break;
}
else
{
putchar(44);
putchar(32);
}
c++;
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
