#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the result of sum
 *
 *@argc: counts the arguments
 *@argv: holds the arguments passed
 *
 *Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int num, sum, i;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num >= 0 && num <= 9)
		{
			sum += num;

		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
