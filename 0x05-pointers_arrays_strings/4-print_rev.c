#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - prints characters in the reverse
 *
 *@s: string to be printed
 *
 *Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	char *z;
	int l;

	l = strlen(s);

	z = s + l - 1;

	while (z >= s)
	{
		printf("%c", *z);
		z--;
	}
	printf("\n");
}
