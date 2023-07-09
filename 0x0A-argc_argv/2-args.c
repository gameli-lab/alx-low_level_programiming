#include "main.h"
#include <stdio.h>

/**
 *print_all_argv - prints all argument values passed
 *
 *@argc: argument count
 *
 *@argv: argument value passed
 *
 *Return: Always 0 (Success)
 */

int print_all_argv(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

/**
 *main - prints the arguments passed
 *
 *@argc: counts the number of arguments passed
 *
 *@argv: holds the value of the argument passed
 *
 *print_all_argv - prints the values
 *
 *Return: returns argv
 */

int main(int argc, char *argv[])
{
	print_all_argv(argc, argv);
	return (argc);
}
