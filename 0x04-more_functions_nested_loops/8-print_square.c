#include "main.h"

/**
 *print_square - prints squares of #
 *
 *@size: size of the square
 *
 *Return: returns the squares
 */

void print_square(int size)
{
	char ch = '#';
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
			
