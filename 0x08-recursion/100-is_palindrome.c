#include "main.h"
#include <string.h>

/**
 *check_palindrome - checks if a string is a palindrome
 *
 *@s: string to be tested
 *
 *@left: starting part of the string
 *
 *@right: end part of the string
 *
 *Return: returns 1 for palindrome otherwise 0
 */

int check_palindrome (char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
}

/**
 *is_palindrome - checks if a string is palindrome
 *
 *@s: string to be tested
 *
 *Return: returns 1 for palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}

	return (check_palindrome(s, 0, len - 1));
}
