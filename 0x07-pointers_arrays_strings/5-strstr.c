#include "main.h"
#include <string.h>

/**
 *_strstr - finds the first occurance of needle in haystack
 *
 *@haystack: address to the main string
 *
 *@needle: address to the substring
 *
 *Return: returns a pointer to needle otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (strstr(haystack, needle) != NULL)
	{
		return (needle);
	}
	else
	{
		return (NULL);
	}
}
