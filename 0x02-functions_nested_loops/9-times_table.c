#include "main.h"

/**
 *times_table - prints the 9 times table
 *
 *Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, result;

	for (i = 0; i < 10; i++)
	{
		result = i * 9;
		_putchar('0' + result);
		_putchar('\n');
	}
}
