#include <stdio.h>

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
		printf("%s\n", argv[0]);
		return (0);
	}
}
