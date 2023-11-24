#include "main.h"

/**
 * print_binary - prints the binary
 * @n: string to print
 */

void print_binary(unsigned long int n)
{
	int i, l = 0;
	unsigned long int new;

	for (i = 63; i >= 0; i--)
	{
		new = n >> i;
		if (new & 1)
		{
			_putchar('1');
			l++;
		}
		else if (new)
			_putchar('0');

	}
	if (!new)
		_putchar('0');
}
