#include "main.h"

/*
 * main - print _putchar using _putchar
 *Description -  Prints the word _putchar followed by a new line
 * Return: Always 0 (Success)
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
