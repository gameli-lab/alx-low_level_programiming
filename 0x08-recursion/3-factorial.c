#include "main.h"
#include <stdio.h>

/**
 *factorial - prints the factorial of n
 *
 *@n: address of the number
 *
 *Return: returns -1 if n < 0 to indicate error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
