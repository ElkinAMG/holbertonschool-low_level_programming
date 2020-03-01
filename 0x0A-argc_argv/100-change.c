#include "holberton.h"
/**
 * main - Prints the minimum number of coins to change.
 * @argc: Counter.
 * @argv: Array.
 *
 * Return: Number of coins.
 */
int main(int argc, char **argv)
{
	int gbcoins, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	gbcoins = 0, coins = atoi(*(argv + 1));

	while (coins > 0)
	{
		(coins >= 25 ? coins -= 25 :
		 (coins >= 10 ? coins -= 10 :
		  (coins >= 5 ? coins -= 5 :
		   (coins >= 2 ? coins -= 2 :
		    coins >= 1 ? coins -= 1 : 0))));

		gbcoins++;
	}

	printf("%d\n", gbcoins);
	return (0);

}
