#include "holberton.h"
/**
 * _strncat - returns a function that concatenate two strings.
 * @dest: destination.
 * @src: source.
 * @n: bytes.
 *
 * Return: destination with concatenate strings.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	c = 0;
	/*Counting the bytes from dest*/
	while (*(dest + c) != '\0')
		c++;
	/*Concatenates dest with src with a bytes limitation(n)*/
	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + c + i) = *(src + i);

	*(dest + c + i) = '\0';

	return (dest);
}
