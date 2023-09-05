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
	int totalLen = 0;
	int index, i;
	char *result;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		totalLen += strlen(av[i]);
	}
	totalLen += ac;

	result = (char *)malloc(totalLen);

	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);

		if (i < ac - 1)
		{
			result[index] = '\n';
			index++;
		}
	}
	result[index] = '\0';
	return (result);
}
