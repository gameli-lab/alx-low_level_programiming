#include "main.h"

/**
 * _strdup - duplicates string
 * @str: string to be duplicated
 *
 * Return: returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);

	return (dup);
}
