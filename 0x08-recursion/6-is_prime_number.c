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
	int i, sq;

	if (n < 2)
	{
		return (0);
	}
	sq = sqrt(n);

	for (i = 2; i <= sq; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
