#include "holberton.h"
/**
 * print_chessboard - print the chessboard
 * @a: pointer to an the chess board represented as an 8x8 array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
			putchar(a[r][c]);
		putchar('\n');
	}
}
