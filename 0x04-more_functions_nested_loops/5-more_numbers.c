#include "main.h"

/**
 *more_numbers - prints numbers from 0 - 14
 *Descrition: prints it 10 times
 *
 *Return: returns the numbers 10 times
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
			}
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
