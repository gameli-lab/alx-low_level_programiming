#include "main.h"

/**
 * get_endianness - gets the endiannes of the syst
 * Return: the endianness
 */

int get_endianness(void)
{
	unsigned int num = 1;

	unsigned char *my = (unsigned char *) & num;

	return ((int) * my);
}
