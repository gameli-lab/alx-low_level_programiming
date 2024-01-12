#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a specified index
 * @head: pointer to the head of the list
 * @index: position to look at for node
 * Return: the node else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	current = head;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	return (current);
}
