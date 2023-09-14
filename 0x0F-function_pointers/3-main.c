#include "3-calc.h"

/**
 * main - entry of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success ortherwise error
 */


int main(int argc, char* argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);

	op = (argv[2][0]);

	num2 = atoi(argv[3]);

	int(*calc)(int, int) = get_op_func(op);

	res = calc(num1, num2);

	printf("%d\n", res);

	return (0);
}
