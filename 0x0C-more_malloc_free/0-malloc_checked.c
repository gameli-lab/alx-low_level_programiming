#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - it allocates memory
 *
 *@b: what memory is being allocated for
 *
 *Return: returns pointer to the memory allocated
 *exits with status 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{

	void *p = malloc(b);

	if (p == NULL)
	{
		exit (98);
	}
	return (p);
}
