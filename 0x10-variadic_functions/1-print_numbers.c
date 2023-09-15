#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separates the numbers
 * @n: constant passed
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);

	if (separator == NULL)
	{
		return;
	}

	printf("%d", va_arg(numbers, int));

	for (i = 1; i < n; i++)
	{
		printf("%s %d", separator, va_arg(numbers, int));
	}
	printf("\n");
	return;
}
