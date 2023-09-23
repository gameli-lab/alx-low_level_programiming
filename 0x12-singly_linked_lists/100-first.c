#include <stdio.h>

void first_come(void)__attribute__((constructor));
/**
 * first_come - prints before main is called
 */

void first_come(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
