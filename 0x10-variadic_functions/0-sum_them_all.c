#include "variadic_functions.h"

/**
 * sum_them_all - sums all argument
 * @n: constant given
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, sum = 0;
	va_list addition;

	if (n == 0)
	{
		return (0);
	}

	va_start(addition, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(addition, int);
		sum += x;
	}
	va_end(addition);
	return (sum);
}
