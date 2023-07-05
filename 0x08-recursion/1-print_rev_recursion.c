#include "main.h"
#include <stdio.h>

/**
 *_prints_rev_recursion - prints strings in reverse
 *
 *@s: address to the string to be printed
 *
 *Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
