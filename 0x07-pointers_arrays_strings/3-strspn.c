#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strspn - gets the length of a prefix substring
 *
 *@s: address for main string
 *@accept: address for substring
 *
 *Return: returns the number of bytes in the initial segment of s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = strspn(s, accept);
	return (len);
}
