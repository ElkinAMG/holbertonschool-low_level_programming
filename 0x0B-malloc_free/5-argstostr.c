#include "holberton.h"
/**
 * argstostr - Concatenates all the arguments of your programs.
 * @ac: Arguments Counter.
 * @av: Arguments Parameters.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, k;
	unsigned int j;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(sizeof(char *) * ac);

	if (str == NULL)
		return (NULL);


	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			*(str + k) = *(*(av + i) + j);
			str[k + 1] = '\0';
		}
		*(str + k) = '\n';
		k++;
	}

	return (str);
}
