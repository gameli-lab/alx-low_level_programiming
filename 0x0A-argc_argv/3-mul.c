#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *mul - multiples two longs
 *
 *@a: first parameter for mul
 *
 *@b: second parameter for mul
 *
 *Return: returns the result stored in c
 */

long mul(long a, long b)
{
	long c;
	c = a * b;
	return (c);
}

/**
 *main - call the mul function
 *
 *@argc: counts the parameters passed
 *
 *@argv: holds the values passed as parameter
 *
 *Return: returns 1 for error otherwise 0
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		long a = strtol(argv[1], NULL, 10);
		long b = strtol(argv[2], NULL, 10);

		printf("%ld\n", mul(a, b));
		return (0);
	}
}
