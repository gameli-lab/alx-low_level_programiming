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

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size < 1)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		cmp(array[size]);
	}
	return (0);
}
