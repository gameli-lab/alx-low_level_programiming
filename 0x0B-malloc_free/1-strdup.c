#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - duplicates the string
 *
 *@str: string to be duplicated
 *
 *Return: returns pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	return (s);
}
