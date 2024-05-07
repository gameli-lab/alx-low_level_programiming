#include "search_algos.h"
#include <stdlib.h>

/**
 * linear_search - function to search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (array == NULL || size == 0)
		return (-1);

	for( i = 0; i < size; i++)
		if (array[i] == value)
		{
			printf("Value checked: array[%zu] = [%d]\n", i, array[i]);
                        return (i);
		}
		else
		{
			printf("Value checked: array[%zu] = [%d]\n", i, array[i]);
		}

	return (-1);
}
