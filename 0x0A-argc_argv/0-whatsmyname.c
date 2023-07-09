#include "main.h"
#include <stdio.h>

/**
 *myname - print the program name
 *
 *@argv: argument value
 *
 *Return: Always 0 (Success)
 */

int myname(char *argv)
{
	printf("%s\n", argv);
	return (0);
}

/**
 *main - prints the program name
 *
 *@argc: argument count
 *
 *@argv: argument value
 *
 *Return: returns argc
 */

int main(int argc, char *argv[])
{
	puts(argv[0]);
	return (argc);
}
