#include "main.h"

/**
 *_puts_recursion - writes characters to the stdout
 *@s: The string to print
 *
 *Return: 1 on success
 */


void _puts_recursion(char *s)
{
  if(*s == '\0')
    {
      _putchar('\0');
      return;
    }

  _putchar(*s);
  _put_recursion(s + 1);
  
}
