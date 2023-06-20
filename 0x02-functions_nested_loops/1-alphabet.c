#include "main.h"

/*
 *print_alphabet - prints the alphabets from a to z
 *
 *return: Always 0
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
