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
      write(1,'\n',1);
    }
  return;

  write(1, s, 1);
  _put_recursion(s + 1);
  
}
