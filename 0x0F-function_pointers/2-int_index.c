#include "function_pointers.h"

/**
 * int_index - executes a function
 * @array: array to be used
 * @size: size of the array
 * @cmp: function to execute
 *
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 1)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
