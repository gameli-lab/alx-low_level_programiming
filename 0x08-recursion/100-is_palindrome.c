#include "main.h"

/**
 *checker - checks for palindromes
 *@s: string to check
 *@start: starting point
 *@end: end point
 *
 *Return: the results
 */

int checker(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (checker(s, start + 1, end - 1));
}

/**
 *is_palindrome - check if a string is a palindrome
 *@s: string to check
 *
 *Return: returns 1 on success
 */

int is_palindrome(char *s)
{
int len;

len = strlen(s);

 return (checker(s, 0, len - 1));
}
