#include <stdio.h>

/**
 *fibonacci - prints fibinacci numbers
 *
 *@n: is the number of fibonacci numbers to be printed
 *
 *main - calls the fibonacci function
 *
 *Return: Always 0 (Success)
 */

void fibonacci(int n)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d", a, b);

	for (i = 2; i < n; i++)
	{
		c = a + b;
		if (i != n)
		{
			printf(", %d", c);
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
