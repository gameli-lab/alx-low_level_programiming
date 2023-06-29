#include "main.h"
#include <string.h>

/**
 *_strcat - it cancatenates src to dest
 *
 *@dest: first argument 
 *
 *@src: second argument
 *
 *Return: returns a pointer to the resulting dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
