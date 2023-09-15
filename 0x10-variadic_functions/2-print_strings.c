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
char* str;
unsigned int x;
va_list strings;
va_start(strings, n);

if (separator == NULL)
{
printf("\n");
return;
}

for (x = 0; x < n; x++)
{
str = va_arg(strings, char*);
if (str == NULL)
{
str = "(nil)";
}
if (x == 0)
{
printf("%s", str);
}
else
{
printf("%s%s", separator, str);
}
}
va_end(strings);
printf("\n");
return;
}
