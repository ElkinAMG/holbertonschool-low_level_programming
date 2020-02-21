#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @s: string
 *
 * Return: return uppercase letters.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	/*travel through the string until the end*/
	while (*(s + i) != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			*(s + i) = (*(s + i) - 32); 
		i++;
	}
	return (s);
}
