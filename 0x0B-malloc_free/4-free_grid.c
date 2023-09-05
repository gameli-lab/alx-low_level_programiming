#include "main.h"

/**
 * free_grid - frees the previous grid
 * @grid: grid to be fred
 * @height: height of the grid
 *
 * Return: Nothingh
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
