#include "main.h"

/**
 * binary - converts binary to unit
 * @b: string to be converted
 * Return: the converted value otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		res = 2 * res + (b[i] - '0');
	}
	return (res);
}

