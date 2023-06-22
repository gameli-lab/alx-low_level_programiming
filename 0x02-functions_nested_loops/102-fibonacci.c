#include <stdio.h>

/**
 *fibonacci - prints fibinacci numbers
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
	printf("\n");
}

/**
 *main - Calls the fibonacci function
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	fibonacci(51);
	return (0);
}
