#include "main.h"

/**
 * flip_bits - checks the number of bits to be changed
 * from one number to others
 * @n: start num
 * @m: end num
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, res = 0;
	unsigned long int prev, ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		prev = ex >> i;
		if (prev & 1)
			res++;
	}
	return (res);
}
