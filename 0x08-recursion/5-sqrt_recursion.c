#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 *_sqrt_recursive - finds square root of a number
 *
 *@n: address to the number
 *
 *@start: start of thr recursion
 *
 *@end: end of recursion
 *
 *Return: returns square_recursive
 */

int _sqrt_recursive(int n, int start, int end)
{
	long long mid, square;

	if (start > end)
	{
		return (-1);
	}

	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_recursive(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_recursive(n, start, mid - 1));
	}
}

/**
 *_sqrt_recursion - finds the square root of numbers
 *
 *@n: address to the number
 *
 *Return: returns -1 for non natural square root numbers
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursive(n, 0, n));
}
