#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *leet - replsces certain characters
 *
 *@s: character on which operation is to be performed
 *
 *Return: returns the s
 */

char *leet(char *s)
{
	int len, i;
	char c;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		c = s[i];

		if (c == 'a' || c == 'A')
			s[i] = '4';
		else if (c == 'e' || c == 'E')
			s[i] = '3';
		else if (c == 'o' || c == 'O')
			s[i] = '0';
		else if (c == 't' || c == 'T')
			s[i] = '7';
		else if (c == 'l' || c == 'L')
			s[i] = '1';

	}
	return (s);
}
