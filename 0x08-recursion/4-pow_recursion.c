#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 *_pow_recursion - prints the value of x raised to the power y
 *
 *@x: address to the base
 *
 *@y: address to the exponent
 *
 *Return: returns -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
