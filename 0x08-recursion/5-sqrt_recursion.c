#include "main.h"

/**
 *checker - checks if we will get natural square
 *@n: number to work with
 *@start: starting point
 *@end: ending point
 *
 *Return: returns -1 on error
 */

int checker(int n, int start, int end)
{
int mid, square;
if (start > end)
{
return (-1);
}
mid = start + (end - start) / 2;
square = mid * mid;

if (square == n)
{
return (mid);
}
else if (square < n)
{
return (checker(n, mid + 1, end));
}
else
{
return (checker(n, start, mid - 1));
}
}

/**
 *_sqrt_recursion - finds the aquare root of a number
 *@n: number to work with
 *
 *Return: the -1 on error
 */
	
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (checker(n, 0, n));
}
