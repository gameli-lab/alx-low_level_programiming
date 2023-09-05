#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * @ac:first argument
 * @av: secont argument
 *
 * Return: a pointer to the new string otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	size_t totalLen = 0;
	int index = 0;
	int i;
	char *result;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			totalLen += strlen(av[i]) + 1;
		}
	}
	result = (char *)malloc((totalLen + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(result + index, av[i]);
			index += strlen(av[i]);
			result[index] = '\n';
			index++;
		}
	}
	result[totalLen] = '\0';
	return (result);
}
