#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, i = bits - 1;
	int zeros = 1;

	while (i >= 0)
	{
		int ans = (n >> i) & 1;
		if (ans)
		{
			zeros = 0;
			_putchar('0' + ans);
		}
		else if (!zeros || i == 0)
				_putchar('0' + ans);
		i--;
	}
}
