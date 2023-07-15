#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - reallocates memory
 *
 *@ptr: pointer to recieve memory block
 *@old_size: old memory size
 *@new_size: new memory size
 *
 *Return: returns new address
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr;
	unsigned int min_size;

	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}

	if (ptr == NULL)
	{
		return malloc(new_size);
	}

	if (new_size == old_size)
	{
		return ptr;
	}

	new_ptr = malloc(new_size);
	
	if (new_ptr == NULL)
	{
		return NULL;
	}

	min_size = (old_size < new_size) ? old_size : new_size;
	
	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return new_ptr;
}
