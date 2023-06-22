#include "main.h"

/**
 *print_most_numbers - prints most numbers from 0 - 9
 *
 *Description: Skips 2 and 4
 *
 *Return: returns numbers from 0 - 9
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i ==4)
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
