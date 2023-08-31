#include "main.h"

/**
 *_pow_recursion - finds the value for x to the power y
 *@x: the base
 *@y: the exponent
 *
 *Return: value of x exponent y
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
