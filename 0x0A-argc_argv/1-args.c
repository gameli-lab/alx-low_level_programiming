#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *main - prints the number of arguments passed
 *
 *@argc: argument count
 *
 *Return: Always 0 (Success)
 */

int no_args(int argc)
{
	printf("%d\n", argc);
	return (0);
}

/**
 *main - prints the arguments passed
 *
 *@argc: argument count
 *
 *@argv: argument value
 *
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	no_args(argc);
	return (0);
}
