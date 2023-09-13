#include "function_pointers.h"

/**
 * array_iterator - iterates through the array
 * @array: array to be used
 * @size: size of the array
 * @action: action to be performed
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
