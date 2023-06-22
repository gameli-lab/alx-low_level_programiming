#include "main.h"

/**
 *print_numbers - prints the numbers from 0 - 9
 *
 *@i: variable for the loop
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
