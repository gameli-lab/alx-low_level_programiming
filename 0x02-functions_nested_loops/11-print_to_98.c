#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints all natural numbers to 98
 *
 *Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int z;

	if (n < 98)
	{
		for (z = n;z <= 98; z++)
		{
			if (z == 98)
			{
				printf("%2d", z);
			}
			else
			{
				printf("%2d", z);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (z= n; z > 98; z--)
		{
			printf("%2d", z);
			_putchar(',');
			_putchar(' ');
		}
	}
}
