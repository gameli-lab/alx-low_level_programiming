#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates the strings
 * @n: constant passed
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list strings;
	va_start(strings, n);
	char* str = va_arg(strings, char*);

	if (separator == NULL)
	{
		printf("\n");
		return;
	}
	if (str == NULL)
	{
		str = "nil";
	}

	printf("%s", str);

	for (x = 1; x < n; x++)
	{

		printf("%s%s", separator, str);
	}
	va_end(strings);
	printf("\n");
	return;
}
