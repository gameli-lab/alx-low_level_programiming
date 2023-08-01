#include "lists.h"

/**
 *listint_len - counts the number of elements in the linked list
 *@h: header to the first node in the link
 *
 *Description: singly linked list node structure
 *
 *Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h -> next;

		count++;
	}
	return (count);
}
