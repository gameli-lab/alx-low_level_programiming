#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees the grid created earlier
 *
 *@grid: the grid created earlier
 *@height: height of the grid
 *
 *Return: returns nothing
 */


void free_grid(int **grid, int height)
{
	int i;
	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	return (grid);
}
