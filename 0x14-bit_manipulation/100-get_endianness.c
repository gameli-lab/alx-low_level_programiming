#include "main.h"

/**
 * get_endianness - gets the endiannes of the system
 * Return:  the endianness
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *my = (unsigned char *) & num;

	return ((int) * my);
}
