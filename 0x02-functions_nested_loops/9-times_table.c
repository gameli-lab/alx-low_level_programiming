#include "main.h"
#include <stdio.h>

/**
 *times_table - prints the 9 times table
 *
 *Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			printf("%2d", result);
			if (j != 9)
			{
				printf(", ");
			}
			_putchar('\n');
		}
	_putchar('\n');
	}
}
