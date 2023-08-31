#include "main.h"

/**
 *is_palindrome - check if a string is a palindrome
 *@s: string to check
 *
 *Return: returns 1 on success
 */

int is_palindrome(char *s)
{
int len, i;

len = strlen(s);

for (i = 0; i < len / 2; i++)
{
if (s[i] != s[len - 1 -i])
{
return (0);
}
}
return (1);
}
