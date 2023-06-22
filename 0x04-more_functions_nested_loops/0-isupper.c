#include "main.h"

/**
 *_isupper - checks whether c is an uppercase
 *
 *@c: the variable to be checked
 *
 *Return: returns 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
