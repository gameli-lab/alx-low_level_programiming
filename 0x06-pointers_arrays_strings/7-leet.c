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

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
	}
	return (s);
}
