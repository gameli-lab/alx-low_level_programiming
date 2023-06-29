#include "main.h"
#include <string.h>

/**
 *reverse_array - reverses the content of an array
 *
 *@a: the array in use
 *
 *@n: the number of members in the array
 *
 *Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
