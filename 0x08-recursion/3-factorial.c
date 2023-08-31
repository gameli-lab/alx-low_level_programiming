#include "main.h"

/**
 *factorial - finds the factorial of a given number
 *@n: factorial to find
 *
 *Return: factorial of the number
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
return (n * factorial (n - 1));
}
}
