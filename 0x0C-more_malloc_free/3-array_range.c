#include "main.h"

/**
 * array_range - creates array of integers
 * @min: starting point of the array
 * @max: end point of the array
 *
 * Return: a pointer to the array otherwise NULL on error
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min + 1);

	arr = (int *)malloc(size * sizeof(int));

	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = min + i;
		}
	}
	return (arr);
}
