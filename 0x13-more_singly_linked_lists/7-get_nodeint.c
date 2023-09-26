#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * @head: pointer to the head of the list
 * @index: the position
 * Return: node at the nth position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index)
		return (current);
	else
		return (NULL);
}

