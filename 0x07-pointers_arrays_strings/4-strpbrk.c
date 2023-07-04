#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strpbrk - locates first occurance of string s in accept
 *
 *@s: address to the main string
 *
 *@accept: address to the substring
 *
 *Return: returns the pointer to the bytes in s that matches the bytes in accept otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char z;

	z = strpbrk(s, accept);
	if (z != NULL)
	{
		return (accept);
	}
	else
	{
		return (NULL);
	}
}
