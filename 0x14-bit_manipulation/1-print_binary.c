#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: argument passed
 * Return: Nothing
 */
/**
void print_binary(unsigned long int n)
{
	int pos, bit;

	if (n == 0)
	{
		_putchar("0");
		_putchar('\n');
	}


	pos = sizeof(n) * 8 - 1;

	while (pos >= 0)
	{
		bit = (n >> pos) & 1;
		_putchar(bit + '0');
		pos--;
	}
	_putchar('\n');
}
*/

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (size - 1);

	while (mask > 0) 
	{
		if (n & mask) 
		{
			_putchar('1');
		}
		else 
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	_putchar('\n');
}
