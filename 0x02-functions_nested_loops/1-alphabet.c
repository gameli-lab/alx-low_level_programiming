#include "main.h"

/*
 *maiprint_alphabet - prints the alphabets
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
