#include "main.h"
#include <stdio.h>


/**
 *print_array - prints the integers in the array
 *
 *@a:the array to be printed
 *
 *@n: number of members in the array
 *
 *Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
}
