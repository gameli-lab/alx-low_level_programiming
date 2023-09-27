#include "lists.h"

/**
 * free_listint_safe - frees the list
 * @h: head of the list
 * Return: size freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t c = 0;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		c++;
	}
	*h = NULL;
	return (c);
}
