#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: formats specified to be printed
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	float f;
	char* str;
	va_list all;
	va_start(all, format);


	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(all, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(all, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(all, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(all, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				else
				{
					printf("%s", s);
				}
				break;
		}
		if (format[i + 1] != '\0' && (format[i + 1] != 'c' || format[i + 1] != 'i' || format[i + 1] != 'f' || format[i + 1] != 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
