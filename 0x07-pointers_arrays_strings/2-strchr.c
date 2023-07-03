#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strchr - locates character c in a string
 *
 *@c: character being located
 *
 *Return: returns a pointer to the first occurance of c otherwise NULL
 */

char *_strchr(char *s, char c)
{
	char *z;

	z = strchr(s, c);
	if (z != NULL)
	{
		return (z);
	}
	else
	{
		return (NULL);
	}
}
