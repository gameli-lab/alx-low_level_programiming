#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints all natural numbers to 98
 *
 *@n: the variable from where we're starting to print from
 *
 *Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		printf("%d", n);
		for (i = n + 1; i <= 98; i++)
		{
			printf(", %d", i);
		}
	}
	else
	{
		printf("%d", n);
		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}
	printf("\n");
}
