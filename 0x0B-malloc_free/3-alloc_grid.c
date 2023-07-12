#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - prints grid of numbers
 *
 *@width: width of the grid
 *@height: height of the grid
 *
 *Return: returns the grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
