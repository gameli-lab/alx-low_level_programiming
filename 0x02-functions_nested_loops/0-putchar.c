#include "main.h"

/*
 * main - print _putchar using _putchar
 * c - character to be printed (_putchar) followed by a new line
 * Return: returns 0 on success
 */

int main(void)
{
char c[] = "_putchar";

int i;

for (i = 0; i < 8; i++)
{
_putchar(c[i]);
}
_putchar('\n');

return (0);
}
