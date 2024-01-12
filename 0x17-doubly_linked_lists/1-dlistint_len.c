#include "lists.h"

/**
 * dlistint_len - counts the number of elements
 * @h: pointer to the head of the list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_count = 0;

	while (h != NULL)
	{
		h = h->next;
		num_count++;
	}
	return (num_count);
}
