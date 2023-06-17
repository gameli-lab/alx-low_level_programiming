#include <stdio.h>

/**
 *main - Entry point
 *
 *return: Always 0 (Success)
 */

int main(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
	{
		putchar(num1 + '0');
		
		if (num1 < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
return (0);
}
