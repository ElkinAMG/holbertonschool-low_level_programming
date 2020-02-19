#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints keys
 * Return: always (0)
 */
int main(void)
{
	int c, i;

	srand(time(NULL)); /*this function creates a new root for rand()*/

	while (c < (2772 - 122)) /*it's works while c less than 2650*/
	{
		i = rand() % 89 + 33; /*i equals to a random number from 33 to 122*/
		if ((c + i) <= 2772)
			c += i;
		printf("%c", i);
	}

	i = 2772 - c;

	c += i;

	printf("%c", i);
	return (0);
}
