#include "main.h"

/**
 * print_listint - prints all the members of the list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
