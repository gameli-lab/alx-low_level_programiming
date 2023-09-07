#include "main.h"


void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = (int *)malloc(b * sizeof(int));
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
