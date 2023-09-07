#include "main.h"

/**
 * string_nconcat - concatenates strings with given bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to the resulting string or NULL on error
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, reslen;

	if (s1 == NULL)
	{
		s1 = " ";
	}

	if (s2 == NULL)
	{
		s2 = " ";
	}

	len1 = strlen(s1);

	len2 = strlen(s2);

	if (n >= len2)
	{
		reslen = len1 + len2;
	}
	else
	{
		reslen = len1 + n;
	}

	result = (char *)malloc((reslen + 1) * sizeof(char));

	strcpy(result, s1);
	
	strncat(result, s2, n);

	return (result);
}
