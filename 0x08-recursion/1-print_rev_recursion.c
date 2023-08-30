#include "main.h"

/**
 *_print_rev_recursion - prints in reverse
 *@s: string to be printed
 *
 *Return: Nothing
 */

void _print_rev_recursion(char *s)
{
char *rec;
if (*s == '\0')
{
_putchar('\n');
return;
}
_print_rev_recursion(*s + 1);
 _putchar(*s);
}
  
