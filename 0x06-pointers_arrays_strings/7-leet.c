#include "holberton.h"
/**
 * leet - encondes a string to l33t.
 * @s: String.
 *
 * Return: string into l33t.
 */
char *leet(char *s)
{
	/*Stores letters in requirements.*/
	char *leet = "aAeEoOtTlL";
	/*Stores theis respective number.*/
	char *l33t = "4433007711";
	int i, l;

	/*Travels for the String.*/
	for (i = 0; *(s + i) != '\0'; i++)
	{
		/*Travels for the letters of the string swapping their values.*/
		for (l = 0; l < 10; l++)
			if (*(s + i) == *(leet + l))
				*(s + i) = *(l33t + l);

	}
	return (s);
}
