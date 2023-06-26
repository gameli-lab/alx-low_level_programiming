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
	int len = strlen(s);
	int start, end;
	for (start = 0, end = len - 1; start < end; start++, end--)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}

}
