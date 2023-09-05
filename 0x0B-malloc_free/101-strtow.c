#include "main.h"

/**
 * strtow - splits string into words
 * @str: string to be splited
 *
 * Return: a pointer to an array of strings otherwise NULL
 */

char **strtow(char *str)
{
	int numWords = 0;
	int i;
	char **words;
	int wordIndex = 0;
	int wordStart = 0;
	int wordLen;

	if ((str == NULL) || (str == ""))
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
		{
			i++;
		}
		if (str[i] != '\0')
		{
			numWords++;
		}
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			i++;
		}
	}
	words = (char **)malloc((numWords + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
		{
			i++;
		}
		wordStart = i;

		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			i++;
		}
		wordLen = i - wordStart;
		words[wordIndex] (char *)malloc((wordLen + 1) * sizeof(char));
		if (words[wordIndex]) == NULL)
		{
			for (j = 0; j < wordIndex; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[wordIndex], str + wordStart, wordLen);
		words[wordIndex][wordLen] = '\0';

		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			i++;
		}
		wordIndex++;
	}
	words[numWords] = NULL;
	return (NULL);
}
