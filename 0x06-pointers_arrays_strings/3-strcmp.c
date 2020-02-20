#include "holberton.h"
/**
 * _strcmp - Compares two strings.
 * @s1: source 1.
 * @s2: source 2.
 *
 *Return: return (1) if it's true and (0) if it's false.
 */
int _strcmp(char *s1, char *s2)
{
	int sign, i;

	sign = 1;

	/*substract s1++ with s2++, if total is == 0 break the loop*/
	for (i = 0; sign != 0 && (*(s1 + i) != '\0' && *(s2 + i) != '\0'); i++)
	{
		sign = (*s1 + i) - (*s2 + i);
	}
	return (sign);
}
