#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary to be converted
 * Return: converted number on success otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, res = 0, len = strlen(b);
	
	while (i < len)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (j < len)
	{
		res = res * 2 + (b[i] - '0');
		i++;
	}
	return (res);
}
