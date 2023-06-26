#include "main.h"
#include <string.h>

/**
 *rev_string - reverses a string
 *
 *@s: string to be printed
 *
 *Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int len;

	len = strlen(s);
	char *start = s;
	char *end = s + len - 1;
	
	while (start < end)
	{
		char temp;
		temp = *start;
		*start = *end;
		*end = temp;
		start ++;
		end --;
	}
}
