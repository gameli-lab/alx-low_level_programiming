#include "main.h"
#include <string.h>

/**
 **_strcpy - copies string form one variable to another
 *
 *@dest: the receiving variable
 *
 *@src: thr variable we are copying
 *
 *Return: Returning dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
