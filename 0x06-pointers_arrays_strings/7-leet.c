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
	int len, i, j;
	char c;

	char leetchar[5] = {'4', '3', '0', '7', '1'};
	char normchar[5] = {'a', 'e', 'o', 't', 'l'};

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		c = s[i];
		for (j = 0; j < 5; j++)
		{
			if (c == normchar[j] || c == normchar[j] - ('a' - 'A'))
			{
				s[i] = leetchar[j];
				break;
			}
		}
	}
	return (s);
}
