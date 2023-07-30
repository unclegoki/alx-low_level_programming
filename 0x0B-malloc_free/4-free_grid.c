#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2D grid
 * @grid: the grid to free up
 * @height: the height of the grid 
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
