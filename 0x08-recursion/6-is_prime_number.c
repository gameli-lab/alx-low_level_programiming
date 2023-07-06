#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 *is_prime - finds prime numbers
 *
 *@n: address to the integer
 *
 *@i: address to the divisor
 *
 *Return: returns check for next divisor
 */

int is_prime(int n, int i)
{
	if (n <= 2)
	{
		return (0);
	}

	if (n % i == 0 && i != n)
	{
	       	return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - finds prime numbers
 *
 *@n: address to the number
 *
 *Return: returns 1 for prime numbers otherwise 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
