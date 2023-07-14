#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *array_range - creates an array of integers
 *
 *@min: minimum number in the array
 *@max: maximum number in the array
 *
 *Return: returns the array
 */

int *array_range(int min, int max)
{
	int size, *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}
	return (arr);
}
