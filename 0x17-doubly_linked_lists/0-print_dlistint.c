#include "lists.h"

/**
 * print_dlistint - prints the number of nodes
 * @h: pointer to the head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_node++;
	}

	return (num_node);
}
