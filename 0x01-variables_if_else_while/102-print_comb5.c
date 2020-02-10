#include <stdio.h>
/**
 * main - this is the main function
 * Return: always return 0 if it's working
*/
int main(void)
{
int a = 0;
int b;
while(a <= 99)
{
while(b <= 99)
{
if(a < 10)
{
putchar((char)a/10 + '0');
putchar((char)a%10 + '0');
}
else
{
putchar((char)a/10 + '0');
putchar((char)a%10 + '0');
}
b++;
a++;
}
}
return 0;
}
