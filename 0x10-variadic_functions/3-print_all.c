#include "variadic_functions.h"

/**
 *print_all - prints everything of every type
 *@char: characters to be printed
 *@format: formats to be printed
 *
 *Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	const char *ptr;
	char c;
	int i;
	float f;
	char *s;

	va_list args;
	va_start(args, format);
	ptr = format;

	while (*ptr != '\0')
	{
		if (*ptr == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if
			(*ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if
			(*ptr == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if
			(*ptr == 's')
		{
			s = va_arg(args, char *);
		
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		if (*(ptr + 1) != '\0')
		{
			printf(", ");
		}
		ptr++;
	}

	va_end(args);
	printf("\n");
}
