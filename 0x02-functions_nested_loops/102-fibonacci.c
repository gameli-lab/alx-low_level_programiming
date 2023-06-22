#include <stdio.h>

/**
 *fibonacci - prints fibinacci numbers
 *
 *main - calls the fibonacci function
 *
 *@n: is the number of fibonacci numbers to be printed
 *
 *Return: Always 0 (Success)
 */

void fibonacci(int n)
{
	int i;
	unsigned long a = 1, b = 2, c;

	printf("%lu, %lu", a, b);

	for (i = 3; i < n; i++)
	{
		c = a + b;
		if (i != n)
		{
			printf(", %lu", c);
			a = b;
			b = c;
		}
	}
	printf(" \n");
}


int main(void)
{
	fibonacci(50);
	return (0);
}
