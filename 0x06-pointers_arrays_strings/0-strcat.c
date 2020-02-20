#include "holberton.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: destination
 * @src: source
 *
 * Return: two strings concatenates.
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	c = 0;
	/*Counting destination*/
	while (*(dest + c) != '\0')
		c++;
	/*Adding src position i to dest final position*/
	for (i = 0; src[i] != '\0'; i++)
		*(dest + c + i) = *(src + i);
	/*Add end of a String*/
	*(dest + c + i) = '\0';
	/*Return dest*/
	return (dest);
}
