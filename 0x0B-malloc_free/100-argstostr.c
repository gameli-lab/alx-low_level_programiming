#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char *argstostr(int ac, char **av)
{
	 int i, j, tlen, index;
	 char *res;
		
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	tlen = 0;

	for (i = 0; i < ac; i++)
	{
		tlen += strlen(av[i]) + 1;
	}

	res = (char *)malloc((tlen + 1) *sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] !='\0'; j++)
		{
			res[index++] = av[i][j];
		}
		res[index++] = '\n';
	}
	res[index] = '\0';
	return res;
}
