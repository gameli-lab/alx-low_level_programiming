#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *wildcmp - compares the strings
 *
 *@s1: string one
 *
 *@s2: string two
 *
 *Return: returns 1 for identical strings otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0'  && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (1);
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
