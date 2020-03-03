#include "holberton.h"
/**
 * alloc_grid - Returns a pointer to a 2d array.
 * @width: First paremeter.
 * @height: Second parameter.
 *
 * Return: Return a 2d array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(sizeof(int) * width);
		if (*(grid + i) == NULL)
		{
			for (j = 0; j < height; j++)
				free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(grid + i) + j) = 0;

	return (grid);
}
