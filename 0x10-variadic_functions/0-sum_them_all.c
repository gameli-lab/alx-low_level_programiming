#include "variadic_function.h"

/**
 *sum_them_all - add sll its parameters
 *@n: tells the number of args to pass
 *
 *Return: returns the sum of summation
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);

	va_end (ap);
	return sum;
}
