#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *
 *@r: the number who's last digit is being printed
 *
 *@k: it stores the last digit
 *
 *Return: returns the last digit
 */

int print_last_digit(int r)
{
	int k = r % 10;

	_putchar(k);
	return (k);
}
