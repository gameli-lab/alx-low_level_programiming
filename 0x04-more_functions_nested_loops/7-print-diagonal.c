#include "main.h"

/**
 *print_diagonal - prints the defined 
 *Description: prints \ diagonally
 *Return: returns the \
 */

void print_diagonal(int n)
{
	char ch = '\\';
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (n < 1)
			{
				continue;
			}
			_putchar(' ');
		}
		_putchar(ch);
		_putchar('\n');
	}
}
