#include "main.h"

/*
 *_islower - checks for lowercase letters
 *
 *@c: the character to be tested
 *
 *return: returns 1 if lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'x')
	{
		return (1);
	}
	else
		return (0);
}
