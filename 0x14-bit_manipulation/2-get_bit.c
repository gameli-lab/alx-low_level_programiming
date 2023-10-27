#include "main.h"

/**
 * get_bit - gets a bit at an index
 * @n: number to test
 * @index: bit we want
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cover = 1<< index;
	int bitval = (n & cover) != 0;
	return (bitval);
}
