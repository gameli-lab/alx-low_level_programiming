#include "main.h"
#include <string.h>

/**
 *_strncpy - copies src onto dest
 *
 *@dest: argument recieving copied data
 *
 *@src: argument being copied
 *
 *@n: argument determining maximum to be copied
 *
 *Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
