#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iteration - iterates though the array
 *@array: the array
 *@size: size of the array
 *@action: pointer to a function
 *
 *Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
