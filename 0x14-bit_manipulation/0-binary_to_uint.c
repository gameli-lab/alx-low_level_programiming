#include "main.h"

/**
 * int binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string
 * Return: the converted number otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL )
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	return (num);
}
