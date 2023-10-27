#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: pointer to a number
 * @index: position of the number
 * Return: 1 on success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(size_t) * 8)
	{
		size_t cover = 1UL << index;
		*n |= cover;
		return (1);
	}
	else
		return (0);
}
