#include "main.h"
#include <stdio.h>

/**
 *print_times_table - prints multiplication table
 *
 *@n: the variable to print the multiplication to
 *
 *Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int m, p, q;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (p = 0; p <= n; p++)
			{
				q = p * m;
				if (p != 0)
				{
					printf(",%3d", q);
				}
				else
				{
					printf("%d",q);
				}
			}
			printf("\n");
		}
	}
}
