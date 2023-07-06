#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 *sqrt_recursion - finds square root of a number
 *
 *@n: address to the number
 *
 *Return: returns the square root of the number otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (sqrt(n));
	}
	else
	{
		int res;
		res = sqrt(n);

		if (res * res == n)
		{
			return (res);
		}
		else
		{
			return (-1);
		}
	}
}
