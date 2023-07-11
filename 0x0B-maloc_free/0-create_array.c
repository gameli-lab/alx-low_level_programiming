#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates array and innitiates it
 *
 *@size: size of the array
 *@c: character assigned to the array
 *
 *Return: returns the pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(c));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
