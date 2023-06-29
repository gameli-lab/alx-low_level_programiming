#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 *string_toupper - converts lowercase letters to uppercase
 *
 *@s: string to be converted
 *
 *Return: returns s
 */

char *string_toupper(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (islower(s[i]))
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
