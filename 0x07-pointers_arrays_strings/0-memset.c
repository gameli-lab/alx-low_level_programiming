#include "main.h"
#include <stdio.h>

/**
 *_memset - fills memory with constant bytes
 *
 *@s: address of area to be filled with constant bytes
 *                                                                                  * *@b: constant bytes to be filled in memory                                           *                                                                                    *@n: bytes of memory to be filled
 *
 *Return: returns the pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		 s[i] = b;
	}

	return (s);
}
