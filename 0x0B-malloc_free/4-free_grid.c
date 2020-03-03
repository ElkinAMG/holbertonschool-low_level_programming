#include "holberton.h"
/**
 * free_grid - This function frees a 2 dimensional grid.
 * @grid: Grid to evaluate.
 * @height: Rows in the array.
 *
 * Return: free memory.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
