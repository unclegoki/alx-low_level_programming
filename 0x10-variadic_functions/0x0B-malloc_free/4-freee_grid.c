#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function to free the memory
 *  allocated for a grid
 * @grid: grid to be freed
 * @height: height of the grid to be freed
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
