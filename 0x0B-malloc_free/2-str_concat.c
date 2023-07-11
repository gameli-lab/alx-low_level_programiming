#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *
 *@s1: string one
 *@s2: string two
 *
 *Return: returns the result of the concatenation
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	size_t len1, len2;

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
	res = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (res == NULL)
	{
		return (NULL);
	}

	strcpy(res, s1);
	strcat(res, s2);
	return (res);
}
