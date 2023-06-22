#include <stdio.h>

/**
 *fibonacci - vomputes the fibonacci numbers
 *
 *@n: quantity of fibonacci numbers to be computed
 *
 *Return: returns the fibonacci numbers
 */

unsigned long fibonacci(int n)
{
	int i;
	unsigned long a = 1, b = 2, c = 0;

	printf("%lu, %lu, " , a , b);
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		if (i != n)
		{
			printf("%lu, ", c);
			a = b;
			b = c;
		}
		else
		{
			printf("%lu", c);
		}
	}
	printf("\n");
	return (c);
}

/**
 *main - calls the fibonacci function
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	fibonacci(99);
	return (0);
}
