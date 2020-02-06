#include <stdio.h>
/**
 * main - main function
 * Return - 0 always
*/
int main(void)
{
int a;
int b;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
putchar(a);
putchar(b);
if (a == 57 && b == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
