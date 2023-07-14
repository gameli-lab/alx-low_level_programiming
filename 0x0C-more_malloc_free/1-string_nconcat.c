#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatenates two strings
 *
 *@s1: string one for concatenation
 *@s2: string two for concatenation
 *@n: length of string for concatenation
 *
 *Return: returns the resulting string
 */ 


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	size_t len1, len2, len3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);

	len2 = strlen(s2);

	len3 = len1 + (n >= len2 ? len2 : n);

	p = (char*)malloc((len3 + 1) * sizeof(char));

	strncpy(p, s1, len1);
	strncat(p, s2, len3 - len1);
	p[len3] = '\0';

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
