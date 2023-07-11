/* Preprocessors */
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2d grid
 * @grid: ptr, grid
 * @height: int, height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL || height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
