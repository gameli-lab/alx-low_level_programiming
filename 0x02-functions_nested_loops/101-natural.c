#include <stdio.h>

/**
 *main - computes the sum of all multiples of 3 and 5
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, j = 1024, k = 0;

	for (i = 1; i < j; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			k += i;
		}
	}
	printf("%d\n", k);
	return (0);
}
