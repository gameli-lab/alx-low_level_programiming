#include "main.h"
#include <string.h>

/**
 *_strcat - cancatenates src to dest
 *
 *@dest: pointer to destination string
 *@src: pointer to source string
 *
 *Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
