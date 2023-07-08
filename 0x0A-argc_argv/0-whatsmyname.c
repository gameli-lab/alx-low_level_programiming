#include "main.h"
#include <stdio.h>

/**
 *main - print the program name
 *
 *@argc: argument count
 *
 *@argv: argument value
 *
 *Return: Always 0 (Success)
 */
int myname(char *argv)
{
	printf("%s\n", argv);
}

/**
 *main - prints the program name
 *
 *@argc: argument count
 *
 *@argv: argument value
 *
 *Return: returns argument count
 */

int main(int argc, char *argv[])
{
	puts(argv[0]);

	return (argc);
}
