#include "main.h"


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
	char *z;
	
	z = strstr(haystack, needle);
		return (z);
}
