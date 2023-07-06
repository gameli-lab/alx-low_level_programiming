#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 *is_prime_number - finds prime numbers
 *
 *@n: address to the integer
 *
 *Return: returns 1 for prime numbers otherwise 0
 */

int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
