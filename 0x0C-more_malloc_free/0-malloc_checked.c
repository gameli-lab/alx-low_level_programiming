#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: amount of memory
 *
 * Return: pointer to the allocated memory otherwise 98
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
