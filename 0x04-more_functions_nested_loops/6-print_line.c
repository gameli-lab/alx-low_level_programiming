#include "main.h"

/**
 *print_line - prints the defined character
 *
 *Description: prints - n times
 *
 *Return: returns - n times
 */

void print_line(int n)
{
	char ch = '_';
	int i;

	for (i = 0; i < n; i++)
	{
		if (n < 1)
			continue;
		_putchar(ch);
	}
	_putchar('\n');
}
