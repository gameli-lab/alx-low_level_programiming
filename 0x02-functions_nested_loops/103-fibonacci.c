#include <stdio.h>

/**
 *fibonacci - prints sum of even fibonacci numbers
 *
 *Return: returns the sum of the values
 */

unsigned long fibonacci(void)
{
	unsigned long sum = 0, a = 1, b = 2, c;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		c = a + b;
		a = b;
		b = c;
	}
	return (sum);
}

/**
 *main - calls the fibonacci function
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long sum = fibonacci();
	
	printf("%lu\n", sum);
	return (0);
}
