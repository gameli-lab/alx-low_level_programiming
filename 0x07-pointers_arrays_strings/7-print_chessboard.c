#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *print_chessboard - prints the chessboard
 *
 *@a: address to the array to be used
 *
 *Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i = 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
