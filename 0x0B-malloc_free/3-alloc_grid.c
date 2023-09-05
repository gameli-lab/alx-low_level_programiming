#include "main.h"

/**
 * alloc_grid - allocates memory to a 2D array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to the array otherwise NULL
 */


int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if ((height < 1) || (width < 1))
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

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
					free (grid[i]);
				}
			free (grid);
			return (NULL);
			}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
