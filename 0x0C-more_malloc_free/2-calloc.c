#include "main.h"

/**
 * _calloc - allocates memory to an array
 * @nmemb: size of the array
 * @size: size of each member
 *
 * Return: return a pointer to the allocated memory or NULL on erreo
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t totalSize;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	totalSize =(size_t)nmemb * size;

	void *mem = malloc(totalSize);

	if (mem == NULL)
	{
		return (NULL);
	}
	memset(mem, 0, totalSize);

	return (mem);
}
