#include "main.h"

/**
 *_isdigit - checks if a variable is a digit
 *
 *@c: variable being tested
 *
 *Return: returns 1 if c is a digit oatherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
