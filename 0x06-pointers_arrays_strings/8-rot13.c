#include "holberton.h"
/**
 * rot13 - encodes a string to rot13.
 * @s: String.
 * Return: returns s encoded to rot13.
 */
char *rot13(char *s)
{
	/*aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ*/
	char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *nop = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, r;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (r = 0; *(abc + r) != '\0'; r++)
			if (*(s + i) == *(abc + r))
			{
				*(s + i) = *(nop + r);
				break;
			}
	}
	return (s);
}
