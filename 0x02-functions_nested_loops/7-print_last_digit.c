#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *
 *@r: the number who's last digit is being printed
 *
 *Return: returns the last digit
 */

int print_last_digit(int r)
{
	int k = r % 10;

	if (k < 0)
	{
		_putchar(-k + '0');
		return (-k);
	}
	else
	{
		_putchar(k + '0');
		return (k);
	}
}
