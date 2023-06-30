#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 *is_separator - identifies the seperators
 *
 *@c: argument searching for the separators
 *
 *Return: returns c
 */

int is_separator(char c)
{
return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' || c == '.' || \
c == '!' ||
c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}' || c \
 == '[' || c == ']');
}

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
	if (len > 0 && islower(s[0]))
	{
		s[0] = toupper(s[0]);
	}

	for (i = 0; i < len; i++)
	{
		if (is_separator(s[i - 1]) && islower(s[i]))
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
