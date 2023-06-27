#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts2 - prints the strings
 *
 *@str: string to be printed
 *
 *Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i, l;
	l = strlen(str);

	for (i = 0; i < l; i +=2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
