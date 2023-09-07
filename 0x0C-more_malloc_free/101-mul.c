#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isAllDigits(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return false;
		}
		str++;
	}
	return true;
}


long long int multiply(int num1, int num2)
{
	return (long long int)num1 * num2;
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}

	if (!isAllDigits(argv[1]) || !isAllDigits(argv[2]))
	{
		printf("Error\n");
		return 98;
	}

	int num1 = atoi(argv[1]);

	int num2 = atoi(argv[2]);

	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		return 98;
	}

	long long int result = multiply(num1, num2);

	printf("%lld\n", result);

	return (0);
}
