#include "main.h"
#include <string.h>

/**
 *_strncat - cancatenates src onto dest
 *
 *@dest: first argument where cancatenation will be done
 *
 *@src: second argument which is going to be cancatenated
 *
 *@n: maximun length to be cancatenated
 *
 *Return: returning the resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
