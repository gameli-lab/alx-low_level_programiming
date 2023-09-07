#include "main.h"

/**
 * _realloc - reallocates old mem bloc to new me block
 * @ptr: pointer to the old memory block
 * @old_size: size of the previously allocated memory
 * @new_size: size of the newly allocated memory
 *
 * Return: pointer to the newly allocated memory block
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		if (new_size > old_size)
		{
			new_size = old_size;
		}
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
		return (new_ptr);
	}
	else
	{
		return (NULL);
	}
}
