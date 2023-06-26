#include "main.h"

/**
 *swap_int - swaps the values of a and b
 *
 *@a: first pointer variable
 *
 *@b: second pointer variable
 *
 *Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
