#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: nothing
 */

int main(int argc, char* argv[])
{
	while(argc)
	{
		printf("%d\n", argv[]);
		return (0);
	}
}
