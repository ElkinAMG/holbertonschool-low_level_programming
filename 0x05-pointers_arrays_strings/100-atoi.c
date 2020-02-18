#include "holberton.h"
/**
 * _atoi - converts from string to integer.
 * @s: pointer string.
 * Return: the number that was converted.
 */
int _atoi(char *s)
{

	while (*(s++) != '\0')
		(*(s) >= '0' && *(s) <= '9') ? return (*(s)) : return (0);

}
