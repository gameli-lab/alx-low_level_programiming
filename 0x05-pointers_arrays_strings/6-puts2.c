#include "main.h"
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
		puts("%c", str[i]);
	}
	printf("\n");
}
