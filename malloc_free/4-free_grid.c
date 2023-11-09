#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid : the 2D grid to free
 * @height : the column size of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
