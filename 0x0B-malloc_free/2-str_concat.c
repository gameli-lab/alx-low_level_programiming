#include "main.h"
#include <string.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *res;
	size_t len1, len2;

	if (s1 == NULL || s2 == NULL)
	{
		return ('\0');
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	res = (char *)malloc((len1 + len2 +1) * sizeof(char));

	if (res == NULL)
	{
		return (NULL);
	}

	strcpy(res, s1);
	strcat(res, s2);
	return (res);
}
