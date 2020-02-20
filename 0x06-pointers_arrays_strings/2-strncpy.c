#include "holberton.h"
/**
 * _strncpy - copy strings
 * @dest: destination.
 * @src: source.
 * @n: bytes to save.
 * Return: returns destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*Copy from src[i] to dest[i] with the size typed(n), while src[i] != '\0'*/
	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	/*Add the '\0' to destination*/
	for ( ; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
