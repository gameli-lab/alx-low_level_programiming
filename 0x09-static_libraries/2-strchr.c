#include "main.h"

/**
 *_strchr - locates character c in a string
 *@s: string in which character is being searched for
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
