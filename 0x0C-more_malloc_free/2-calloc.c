#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - allocates memory
 *
 *@nmemb: array for memory allocation
 *@size: size of the array
 *
 *Return: repurns the resulting pointer
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	c = malloc(nmemb * size);

	if (c == NULL)
	{
		return (NULL);
	}
	memset(c, 0, nmemb * size);

	return (c);
}
