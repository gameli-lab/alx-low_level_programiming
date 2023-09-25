#include "lists.h"

/**
 * listint_len - prints the length of the list
 * @h: pointer to the hearder of the list
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
