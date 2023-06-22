#include "main.h"

/**
 *print_numbers - prints the numbers from 0 - 9
 *
 *@i: variable for the loop
 *
 *Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar(' ');
}
