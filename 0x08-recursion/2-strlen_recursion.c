#include "main.h"

/**
 *_strlen_recursion - finds length of string
 *@s: string whose length we find
 *
 *Return: length of the string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
