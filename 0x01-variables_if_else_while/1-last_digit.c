#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - this is the main function
 * Return: always return 0
 */
int main(void)
{
int n;
int b;
srand(time(0));
n = rand() - RAND_MAX / 2;
b = (n % 10);
if (b > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, b);
}
else if (b == 0)
{
printf("Last digit of %i is %i and is 0", n, b);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, b);
}
return (0);
}
