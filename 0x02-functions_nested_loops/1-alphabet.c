#include "main.h"

/*
 *print_alphabet - prints the lower case alphabets from a to z
 *
 *return: void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
