#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 *cap_string - capitalizes each word
 *
 *@s: string to be converted
 *
 *Return: returns s
 */

char *cap_string(char *s)
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
