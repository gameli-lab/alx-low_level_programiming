#include "variadic_functions.h"

/**
 *print_numbers - prints numbers followed by a seperator
 *@separator: char whic seperates esch number
 *@n: number of arguments passed to the function
 *
 *Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
