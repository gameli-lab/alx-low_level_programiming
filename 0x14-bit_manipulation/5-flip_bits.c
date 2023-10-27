#include "main.h"

/**
 * flip_bits - flips bits
 * @n: first num
 * @m: second num
 * Return: fliped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t xorres = n ^ m;
	unsigned int count = 0;

	while (xorres)
	{
		count += xorres & 1;
		xorres >>= 1;
	}
	return (count);
}
