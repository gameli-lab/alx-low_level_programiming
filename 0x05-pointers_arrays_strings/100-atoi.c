#include "main.h"

/**
 *_atoi - converts strings to integers
 *
 *@s: string to be converted
 *
 *Return: returns the result of the conversion
 */

int _atoi(char *s)
{
	int sign, i;
	double digit, res;

	sign = 1;
	res = 0;
	i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if	(s[i] == '+')
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			res = res * 10 + digit;
		}
		else
		{
			break;
		}
		i++;
	}
	res = res * sign;

	return (res);
}
